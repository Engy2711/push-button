int LED = 10; 
int PUSH_BUTTON = 3; 
int LED_PIN = 1;
int PIN = A3;
int readValue = 0;
int ledValue = 0;
void setup() {
  pinMode(LED, OUTPUT); 
  pinMode(PUSH_BUTTON, INPUT); 
  pinMode(PIN, INPUT); 
  pinMode(ledValue,OUTPUT);

}

void loop() {
  if (digitalRead(PUSH_BUTTON) == LOW)
{
  digitalWrite(LED, HIGH);
}
 else
{
  digitalWrite(LED, LOW);
}
 readValue = analogRead(A3);
 ledValue = map(readValue,0,1024,0,255);
 analogWrite(LED_PIN,ledValue);
}
