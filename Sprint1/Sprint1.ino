#include <servo.h>


const int kPinReedSwitch = 3;
const int kPinServo1 = 9;
const int kPinServo2 = 10;

void setup() {
    pinMode(kPinReedSwitch, INPUT);
    servoRight.attach(kPinServo1);
    servoLeft.attach(kPinServo2);

    void stop(){
        servoRight.write(90)
        servoLeft.write(90)
    }

    void forward(){
        servoRight.write(180)
        servoLeft.write(0)
    }

    void right(){
        servoRight.write(180)
        servoLeft.write(180)
    }

    void left(){
        servoRight.write(0)
        servoLeft.write(0)
    }
}

void loop() {
    int reading = digitalRead(kPinReedSwitch);
    if(reading == LOW){
        forward();
        delay(10);
    } else {
        stop();
        delay(2000)
    }

}


