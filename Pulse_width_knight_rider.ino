//demonstrating PWM

int d = 5;

void setup() {
  // put your setup code here, to run once:

pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

for (int b = 9; b < 12; b++ ){ 

for (int a = 0; a < 256; a++) {

analogWrite(b, a); 
delay(d);
  
  }


for (int a = 255; a >= 0; a--) {

analogWrite(b, a); 
delay(d);
  
  }


}


delay(200);
}
