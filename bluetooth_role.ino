int led=13; 
void setup(){
  Serial.begin(9600); pinMode(led,OUTPUT); digitalWrite(led,LOW);
  } 
void loop(){
  if(Serial.available()>0)
  {
    int deger=Serial.read(); if(deger=='1') { digitalWrite(led,HIGH); } else { digitalWrite(led,LOW);
    } } }
