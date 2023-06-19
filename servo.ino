#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
int motor1PinA = 2 ;

int motor1PinB =3 ;

int enablelPin= 11 ;

void setup() {
Serial.begin(9600);//시리얼통신
myservo.write(90);
myservo.attach(9);
pinMode(motor1PinA, OUTPUT);

pinMode(motor1PinB, OUTPUT);

pinMode(enablelPin, OUTPUT);

analogWrite(enablelPin, 1000);

}

void loop() {


Forward(); 
delay(200);
Turn(); 
delay(200);
Forward();
delay(200);
Stop();}
void Forward(){ // 앞


digitalWrite(motor1PinA, LOW);

digitalWrite(motor1PinB, HIGH);

}
void Turn(){
  myservo.write(150);
  delay(200);
  myservo.write(30);
}
void Stop(){
  digitalWrite(motor1PinA, LOW);

digitalWrite(motor1PinB, LOW);
}

