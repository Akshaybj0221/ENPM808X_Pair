
#include "gtest/gtest.h"
#include <pid.hpp>

TEST(test, param) {
	pid obj;
	obj.input_pid(1, 1, 1);

	ASSERT_EQ(obj.get_kp(), 1);
	ASSERT_EQ(obj.get_kd(), 1);
	ASSERT_EQ(obj.get_ki(), 1);
}

TEST(PIDresult, param) {
	pid obj2;

	ASSERT_EQ(obj2.pid_cal(), 10);
}
