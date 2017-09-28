/*
 * pid.cpp
 *
 *  Created on: Sep 27, 2017
 *      Author: viki
 */

// TestdrivendevelopmentPID.cpp : Defines the entry point for the console application.
//


#include <pid.hpp>



void pid::inputPid(double p, double d, double i) {

	kp = p;
	kd = d;
	ki = i;
}

double pid::pidCal() {
	return 10;
}

double pid::getKp() {
	return 1;
}

double pid::getKd() {
	return 1;
}

double pid::getKi() {
	return 1;
}


