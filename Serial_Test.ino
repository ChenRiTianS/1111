int swpin = 6;


char KeyPress[] = {0x0C, 0x00, 0xA1, 0x01, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00};
char KeyRelease[] = {0x0C, 0x00, 0xA1, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};


void setup() {
  pinMode(swpin, INPUT);
  digitalWrite(swpin, HIGH);
  Serial.begin(9600);
}

byte i;
void loop()

{
  if (digitalRead(swpin)==LOW)
  {
   
  
  
  for (byte i = 0; i < sizeof(KeyPress); i++)
  {
    Serial.write(KeyPress[i]);
    
  }
  //Serial.write("/n");
  for (byte i = 0; i < sizeof(KeyRelease); i++)
  {
    Serial.write(KeyRelease[i]);
  }
  //Serial.write("/n");
  delay(5000);
  }
}
