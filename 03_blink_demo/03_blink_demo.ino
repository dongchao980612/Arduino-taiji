int delayTime = 3000;

void setup() {
  // put your setup code here, to run once:
    pinMode(LED_BUILTIN, OUTPUT); // set pin 13 as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); // turn on LED
  delay(3000); // wait for 1 second
  digitalWrite(LED_BUILTIN, LOW); // turn off LED
  delay(delayTime); // wait for 1 second
  
}
