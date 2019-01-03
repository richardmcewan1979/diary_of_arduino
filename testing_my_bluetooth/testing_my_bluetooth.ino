#include <SoftwareSerial.h>

// Define the data transmit/receive pins in Arduino

#define TxD 2

#define RxD 3

int count=1;

SoftwareSerial mySerial(RxD, TxD); // RX, TX for Bluetooth

void setup() {

mySerial.begin(9600); // For Bluetooth

Serial.begin(9600); // For the IDE monitor Tools -> Serial Monitor

// Any code that you want to run once....

}

void loop() {

// put your main code here, to run repeatedly:

mySerial.println( "hello world");
mySerial.println(count);
count = count+1;
delay(20);


}




