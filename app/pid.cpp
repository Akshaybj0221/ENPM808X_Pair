/*
 * pid.cpp
 *
 *  Created on: Sep 27, 2017
 *      Author: viki
 */

// TestdrivendevelopmentPID.cpp : Defines the entry point for the console application.
//


#include <pid.hpp>
#include <iostream>


void pid::inputPid(double p, double i, double d) {

	kp = p;
	kd = d;
	ki = i;
	prevError = 0;
	integral = 0;
	max = 100;
	min = -100;
}

double pid::pidCal(double setV, double currentV, double dt) {
    double outputV = 0;
    double error = 0;
    double derivative = 0;

    if (!dt)
        return 0;

    error = setV - currentV;
    integral += (error * dt);
    derivative = (error - prevError) / dt;

    outputV = kp * error + ki * integral  + kd * derivative;
    prevError = error;
    //std::cout<< prevError;
    if( outputV > max )
            outputV = max;
    else if( outputV < min )
            outputV = min;
    return outputV;
}

double pid::getKp() {
	return kp;
}

double pid::getKd() {
	return kd;
}

double pid::getKi() {
	return ki;
}


