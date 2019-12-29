int photoResist = A0; // select the input pin for LDR
int lightamount = 0; // variable to store the value coming from the sensor
int pump = 12; //water pump
int light1 = 5;//actual light

void setup() {
  pinMode(pump, OUTPUT);
  pinMode(light1, OUTPUT);
  Serial.begin(9600); //sets serial port for communication
}
void loop() {
  
  digitalWrite(pump, HIGH); //pump on
  for (int i=0;i<250;i++){ //continuous reading of light for 3 sec
    lightamount = analogRead(photoResist); // read the value from the sensor
    Serial.println(lightamount); //prints the values coming from the sensor on the screen
    delay(10); //10ms delay between readings
    if (lightamount<250){ //if too dark turn light on otherwise keep light off
     digitalWrite(light1, HIGH);
    }else{
      digitalWrite(light1, LOW);
    }
  }
  digitalWrite(pump, LOW); //pump off
  for (int i=0;i<2000;i++){ //continuous reading of light for 3 sec
    lightamount = analogRead(photoResist); // read the value from the sensor
    Serial.println(lightamount); //prints the values coming from the sensor on the screen
    delay(10); //10ms delay between readings
    if (lightamount<250){ //if too dark turn light on otherwise keep light off
     digitalWrite(light1, HIGH);
    }else{
      digitalWrite(light1, LOW);
    }
  
  }
  
}
