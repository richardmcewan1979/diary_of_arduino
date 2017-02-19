#define LED 12
#define BUTTON 7
int count = 1;

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(BUTTON, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(BUTTON) == LOW) {
  Serial.println("Button was pressed");
  Serial.println(count);
  delay(1500);
  count = count +1;
}

if (digitalRead(BUTTON) == HIGH) {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  
  }

}
