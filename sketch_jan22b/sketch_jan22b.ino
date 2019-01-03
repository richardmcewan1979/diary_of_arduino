#include <SoftwareSerial.h>

SoftwareSerial blueSerial(0,1);

int i;

void setup() 
{
  blueSerial.begin(38400); 
}
 
void loop()
{
  blueSerial.write(i);
  i++;
  if(i>255)
  {
    i=0;
  }

   delay(1000);
}
