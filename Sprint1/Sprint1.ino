#include <servo.h>
#include <>

#define 
#define 


const int kPinReedSwitch = 3;
const int kPinServo1 = 9;
const int kPinServo2 = 10;

void setup() {
    pinMode(kPinReedSwitch, INPUT);
    digitalWrite(kPinReedSwitch, HIGH)
    servoRight.attach(kPinServo1);
    servoLeft.attach(kPinServo2);
}

void loop() {

    if(digitalRead(kPinReedSwitch == LOW)){

    }

}


