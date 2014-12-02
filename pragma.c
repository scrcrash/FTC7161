#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  none)
#pragma config(Hubs,  S2, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S3, HTServo,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Sensor, S3,     ,               sensorI2CMuxController)
#pragma config(Sensor, S4,     IRSensor,       sensorHiTechnicIRSeeker600)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     motorBL,       tmotorTetrix, openLoop, driveRight)
#pragma config(Motor,  mtr_S1_C1_2,     motorBR,       tmotorTetrix, openLoop, reversed, driveLeft)
#pragma config(Motor,  mtr_S1_C2_1,     motorTR,       tmotorTetrix, PIDControl, reversed, driveRight, encoder)
#pragma config(Motor,  mtr_S1_C2_2,     motorTL,       tmotorTetrix, PIDControl, driveLeft, encoder)
#pragma config(Motor,  mtr_S1_C3_1,     motorPulley,   tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_2,     motorb,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_1,     motora,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,     motorBrush,    tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S3_C1_1,    servoHingeL,          tServoStandard)
#pragma config(Servo,  srvo_S3_C1_2,    servoHingeR,          tServoStandard)
#pragma config(Servo,  srvo_S3_C1_3,    servoBasket,          tServoStandard)
#pragma config(Servo,  srvo_S3_C1_4,    servoBlocker,         tServoStandard)
#pragma config(Servo,  srvo_S3_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S3_C1_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
