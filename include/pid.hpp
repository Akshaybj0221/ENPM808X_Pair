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
	float kp, kd, ki;

public:
	void input_pid(float, float, float);
	int pid_cal();
	int get_kp();
	int get_kd();
	int get_ki();
};




#endif /* INCLUDE_PID_HPP_ */
