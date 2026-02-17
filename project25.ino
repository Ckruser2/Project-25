#define LED 13
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  attachInterrupt(0, displayhappyface, RISING);
  attachInterrupt(1, displaysadface, RISING);  
}
void displayhappyface()
{
  Serial.print(":D\n");
}
void displaysadface()
{
  Serial.print(":(\n");
}
void loop()
{
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}