//this works to pass strings to java processing

//This version includes distance sensing
//This verison should be what is uplaoded to the robot module.
//it's sending distance over wifi

#define trigPin 11
#define echoPin 3

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  Serial.println("Started");
  
}

void loop() {



//distance
  
  long duration, distance;
//added
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(2);
duration = pulseIn(echoPin, HIGH);
distance = float((duration /2)/29.1);
//need to coorect this later.

delay(250);
//end added
  Serial.println(distance);

 }
 

