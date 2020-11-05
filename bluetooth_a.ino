#include <AFMotor.h>

//creates two objects to control the terminal 3 and 4 of motor shield.
AF_DCMotor motor1(1);
AF_DCMotor motor2(3);

char command;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //Set the baud rate to your bluetooth module.
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {
       command = Serial.read();
       Stop(); //initalize with motors stoped
       //Change pin mode only if new command is different from previous.
       //Serial.println(command);
       switch(command) {
        case 'F':
           forward();
           break;
           case 'B':
           back();
           break;
           case 'L':
           left();
           break;
           case 'R';
           right();
           break;
           case 'G':

Forleft();

break;

case 'I':

Forright ();

break;

case 'H':

Backleft();

break;

case 'J':

Backright ();

break;

}

}

}

void forward()

{

motor1.setSpeed(255); //Define maximum velocity

motor1.run(FORWARD); //rotate the motor clockwise

motor2.setSpeed(255); //Define maximum velocity

motor2.run(FORWARD); //rotate the motor clockwise

}

void back()

{

motor1.setSpeed(255);

motor1.run(BACKWARD); //rotate the motor counterclockwise

motor2.setSpeed(255);

motor2.run(BACKWARD); //rotate the motor counterclockwise

}

void left()

{

motor1.setSpeed(255); //Define maximum velocity

motor1.run(FORWARD); //rotate the motor clockwise

motor2.setSpeed(0);

motor2.run(RELEASE); //turn motor2 off

}

void right()

{

motor1.setSpeed(0);

motor1.run(RELEASE); //turn motor1 off

motor2.setSpeed(255); //Define maximum velocity

motor2.run(FORWARD); //rotate the motor clockwise

}

void Stop()

{

motor1.setSpeed(0);

motor2.run(RELEASE); //turn motor1 off

motor2.setSpeed(0);

motor2.run(RELEASE); //turn motor2 off

}

void Forright()

{

motor1.setSpeed(140);

motor1.run(FORWARD); //turn motor1 off

motor2.setSpeed(255);

motor2.run(FORWARD); //turn motor2 off

}

void Forleft()

{

motor1.setSpeed(255);

motor1.run(FORWARD); //turn motor1 off

motor2.setSpeed(140);

motor2.run(FORWARD); //turn motor2 off

}

void Backright()

{

motor1.setSpeed(140);

motor1.run(BACKWARD); //turn motor1 off

motor2.setSpeed(255);

motor2.run(BACKWARD); //turn motor2 off

}

void Backleft()

{

motor1.setSpeed(255);

motor1.run(BACKWARD); //turn motor1 off

motor2.setSpeed(140);

motor2.run(BACKWARD); //turn motor2 off

}
       
           
       
  
