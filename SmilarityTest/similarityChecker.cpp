#include <string>
#include <math.h>
using namespace std;

class SimilarityChecker {
public:
	static const int MAX_SCORE = 60;
	static const int MIN_SCORE = 0;

	// 글자 수 검사
	int lengthCheck(string a, string b) {
		double aLength = a.length();
		double bLength = b.length();

		if (aLength == bLength)
			return MAX_SCORE;
		else if (TwiceDifference(aLength, bLength)) {
			return MIN_SCORE;
		}
		else if (aLength > bLength) {
			return static_cast<int>((1 - (aLength - bLength) / bLength) * MAX_SCORE);
		}
		else { // aLength < bLength
			return static_cast<int>((1 - (bLength - aLength) / aLength) * MAX_SCORE);
		}
	}

	bool TwiceDifference(double aLen, double bLen)
	{
		return bLen >= (aLen * 2) || aLen >= (bLen * 2);
	}

	// 알파벳 검사
};