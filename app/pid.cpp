/*
 * pid.cpp
 *
 *  Created on: Sep 27, 2017
 *      Author: viki
 */

// TestdrivendevelopmentPID.cpp : Defines the entry point for the console application.
//


#include <pid.hpp>



void pid::input_pid(float p, float d, float i) {

	kp = p;
	kd = d;
	ki = i;
}

int pid::pid_cal() {
	return 10;
}

int pid::get_kp() {
	return 1;
}

int pid::get_kd() {
	return 1;
}

int pid::get_ki() {
	return 1;
}


