#include <gtest/gtest.h>
#include <pid.hpp>

TEST(dummy, should_pass) {
	EXPECT_EQ(1, 1);
}

TEST(parameterTest, paramValue) {
	pid obj;
	obj.inputPid(1, 1, 1);

	ASSERT_EQ(obj.getKp(), 1);
	ASSERT_EQ(obj.getKi(), 1);
	ASSERT_EQ(obj.getKd(), 1);
}

TEST(testResult, param) {
	pid obj;
	obj.inputPid(0.05, 0.1, 0.02);
	double targetV = 5.0;
	double val = 4.5;
	double time = 100;
	double dt = 0.1;
	for (int i = 0; i < time/dt; i++) {
		val = obj.pidCal(targetV, val, dt);

	    printf("val:% .4f\n", val);
	}

	ASSERT_TRUE(targetV-val < 0.001 ); //error less than 0.001
}
