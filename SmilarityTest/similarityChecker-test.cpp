#include <iostream>
#include <gmock/gmock.h>
#include "similarityChecker.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}