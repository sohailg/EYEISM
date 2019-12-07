
int SENSE=4;  
int LED=3;
int state=HIGH;
void setup()
{

pinMode(SENSE, INPUT);
pinMode(LED, OUTPUT);
Serial.begin(9600);
}
void loop()
{
state=digitalRead(SENSE);

if(state==HIGH)
{
  delay(5000);
  if(state==HIGH)
  {
  digitalWrite(LED,LOW);
  delay(500);
  digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED,HIGH);
  }
}
else
{
  digitalWrite(LED,LOW);
}}
