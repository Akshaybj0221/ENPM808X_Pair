/*
 * pid.hpp
 *
 *  Created on: Sep 27, 2017
 *      Author: Akshay
 */

#ifndef INCLUDE_PID_HPP_
#define INCLUDE_PID_HPP_

class pid {
protected:
	double kp, kd, ki;

public:
	void inputPid(double, double, double);
	double pidCal();
	double getKp();
	double getKd();
	double getKi();
};




#endif /* INCLUDE_PID_HPP_ */
