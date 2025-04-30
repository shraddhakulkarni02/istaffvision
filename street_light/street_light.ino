//Automatic Street Light with LDR//

#define sensorPin A5  
#define light 2

int sensorValue;
unsigned long long tim=0;  


void setup()
{ Serial.begin(115200);
  pinMode(light,OUTPUT);
  pinMode(sensorPin,INPUT);
}

void loop()
{
  sensorValue = analogRead(sensorPin);  
// check if it is dark then switch on the light else let it remain off 

  if (sensorValue <400)
  digitalWrite(light,HIGH);

  else
  digitalWrite(light,LOW);

String s1="Sen Value: "+((String) sensorValue);
if((millis()-tim)>1000) {
  Serial.println(s1);
  tim=millis();
}

}

