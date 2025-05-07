#include <iostream>
#include <gmock/gmock.h>
#include "similarityChecker.cpp"

TEST(TestSuite, stringLengthCheck1) {
	SimilarityChecker sc;
	int result = sc.lengthCheck("ASD", "DSA");
	EXPECT_EQ(60, result);
}

TEST(TestSuite, stringLengthCheck2) {
	SimilarityChecker sc;
	int result = sc.lengthCheck("A", "BB");
	EXPECT_EQ(0, result);
}

TEST(TestSuite, stringLengthCheck3) {
	SimilarityChecker sc;
	int result = sc.lengthCheck("AAABB", "BAA");
	EXPECT_EQ(20, result);
}

TEST(TestSuite, stringLengthCheck4) {
	SimilarityChecker sc;
	int result = sc.lengthCheck("AA", "AAE");
	EXPECT_EQ(30, result);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}