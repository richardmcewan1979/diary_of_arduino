//Project 16 Creating an LED binary number display

#define DATA 6
#define LATCH 8
#define CLOCK 10


void setup() {
  // put your setup code here, to run once:
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=0; i < 256; i++)
  {
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLOCK, MSBFIRST, i);
    digitalWrite(LATCH, HIGH);
    delay(250);
  }

}
