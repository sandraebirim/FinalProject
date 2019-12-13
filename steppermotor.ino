/*

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <Stepper.h>

const int stepsPerRevolution = 513;  // change this to fit the number of steps per revolution
// for your motor
int incomingByte;
int counter;
// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
//Stepper stepper2(stepsPerRevolution, 1, 3, 2, 4);


void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  //stepper2.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
  
  //myStepper.step(stepsPerRevolution);
}

void loop() {
   //Serial.begin(9600);
   //incomingByte = Serial.read();
   if (Serial.available()>0){
    incomingByte = Serial.read();
    
    if(incomingByte == 'w'){

      myStepper.step(-stepsPerRevolution*4);
      delay(15000);
      myStepper.step(stepsPerRevolution*4);
      
      delay(5000);
    }

  }
  
}
