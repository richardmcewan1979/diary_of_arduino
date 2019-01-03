#include <SoftwareSerial.h>

SoftwareSerial blueSerial(0,1);  //RX,TX
 
void setup()
{ 
  blueSerial.begin(38400);
  Serial.begin(9600);
}
 
void loop()
{
  // Read from HC-05 and send new data to Serial Monitor
  if (blueSerial.available())
  {
    Serial.println(blueSerial.read());
  }
}
