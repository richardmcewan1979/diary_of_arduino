// include the SoftwareSerial library so you can use its functions:
#include <SoftwareSerial.h>

#define rxPin 9
#define txPin 10

// set up a new serial port
SoftwareSerial mySerial =  SoftwareSerial(rxPin, txPin);

void setup()  {
  // define pin modes for tx, rx:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
}

void loop() {
  // ...
}
