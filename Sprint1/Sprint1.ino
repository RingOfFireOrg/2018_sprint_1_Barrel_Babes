/*
 * Comments go here
 */

#include <Servo.h>


const int kPinReedSwitch = 3;
const int kPinServo1 = 10;
const int kPinServo2 = 9;
const int kPinButton = 12;

Servo servoRight;
Servo servoLeft;

int magnetnumb = 0;

void setup() {
    pinMode(kPinReedSwitch, INPUT);
    servoRight.attach(kPinServo2);
    servoLeft.attach(kPinServo1);
    pinMode(kPinButton, INPUT);

    
}

void stop(){
        servoRight.write(90);
        servoLeft.write(90);
    }

void forward() {
        servoLeft.write(0);
        servoRight.write(180);
}

void right() {
        servoRight.write(180);
        servoLeft.write(180);
}

void left() {
        servoRight.write(0);
        servoLeft.write(0);
}

void backward(){
        servoRight.write(0);
        servoLeft.write(180);
}
bool started = false;
void loop() {
    if (digitalRead(12) == LOW) {
        started = true;
    }


    if (started == false){
        return;
    }
    int reading = digitalRead(kPinReedSwitch);

    if (magnetnumb < 4){
        if(reading == LOW){
            forward();
            delay(10);
        } else {
            stop();
            delay(2000);
            forward();
            delay(500);
            magnetnumb += 1;
        }
    } else { 
        if (reading == LOW){
            forward();
            delay(10);
        } else {
            stop();
            delay(10);
            backward();
            delay(50);
            stop();
            delay(100000);
        
        }

        
    }

}


