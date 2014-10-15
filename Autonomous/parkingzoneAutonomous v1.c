#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     IRSeeker,       sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorTL,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorBL,       tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_1,     motorTR,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorBR,       tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     motorBrush,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorConveyor, tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C4_1,    servoHingeL,          tServoNone)
#pragma config(Servo,  srvo_S1_C4_2,    servoGripL,           tServoNone)
#pragma config(Servo,  srvo_S1_C4_3,    servoHingeR,          tServoNone)
#pragma config(Servo,  srvo_S1_C4_4,    servoGripR,           tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                           Autonomous Mode Code Template
//
// This file contains a template for simplified creation of an autonomous program for an TETRIX robot
// competition.
//
// You need to customize two functions with code unique to your specific robot.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                    initializeRobot
//
// Prior to the start of autonomous mode, you may want to perform some initialization on your robot.
// Things that might be performed during initialization include:
//   1. Move motors and servos to a preset position.
//   2. Some sensor types take a short while to reach stable values during which time it is best that
//      robot is not moving. For example, gyro sensor needs a few seconds to obtain the background
//      "bias" value.
//
// In many cases, you may not have to add any code to this function and it will remain "empty".
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void initializeRobot()
{
  // Place code here to sinitialize servos to starting positions.
  // Sensors are automatically configured and setup by ROBOTC. They may need a brief time to stabilize.

  return;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                         Main Task
//
// The following is the main code for the autonomous robot operation. Customize as appropriate for
// your specific robot.
//
// The types of things you might do during the autonomous phase (for the 2008-9 FTC competition)
// are:
//
//   1. Have the robot follow a line on the game field until it reaches one of the puck storage
//      areas.
//   2. Load pucks into the robot from the storage bin.
//   3. Stop the robot and wait for autonomous phase to end.
//
// This simple template does nothing except play a periodic tone every few seconds.
//
// At the end of the autonomous period, the FMS will autonmatically abort (stop) execution of the program.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

task main()
{
  initializeRobot();

  waitForStart(); // Wait for the beginning of autonomous phase.

	//move forward
  motor[motorTR] = 60;
  motor[motorTL] = 60;
  motor[motorBR] = 60;
  motor[motorBL] = 60;

  wait1Msec(2000);

  //turn right
  motor[motorTR] = -40;
  motor[motorTL] = 40;
  motor[motorBR] = -40;
  motor[motorBL] = 40;

  wait1Msec(2000);

  //Move forward until IR Sensor reads 5
  if(SensorValue[IRSeeker] == 5)
  {
  	motor[motorTR] = 0;
  	motor[motorTL] = 0;
  	motor[motorBR] = 0;
  	motor[motorBL] = 0;
  }
  else
  {
  	motor[motorTR] = 30;
  	motor[motorTL] = 30;
  	motor[motorBR] = 30;
  	motor[motorBL] = 30;
  }

  //use encoder rotation value to determine alignment
  //write and read value to NXT brick

  //score center goal

  //hit kickstand
  	//move back
  	motor[motorTR] = -40;
  	motor[motorTL] = -40;
  	motor[motorBR] = -40;
  	motor[motorBL] = -40;

  	wait1Msec(1000);

  	//turn right
  	motor[motorTR] = -40;
  	motor[motorTL] = 40;
  	motor[motorBR] = -40;
  	motor[motorBL] = 40;

  	wait1Msec(1000);

  	//move forward
  	motor[motorTR] = 40;
  	motor[motorTL] = 40;
  	motor[motorBR] = 40;
  	motor[motorBL] = 40;

  	wait1Msec(1000);

  	//turn left
  	motor[motorTR] = 40;
  	motor[motorTL] = -40;
  	motor[motorBR] = 40;
  	motor[motorBL] = -40;

  	wait1Msec(1000);

  	//move forward to kickstand
  	motor[motorTR] = 40;
  	motor[motorTL] = 40;
  	motor[motorBR] = 40;
  	motor[motorBL] = 40;

  	wait1Msec(1000);

  	//use encoder value to determine how far back robot should go

  while (true)
  {}
}
