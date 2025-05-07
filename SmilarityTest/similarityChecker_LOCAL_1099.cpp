#include <string>
#include <math.h>
using namespace std;

class SimilarityChecker {
public:
	static const int PartialScorePercent = 60;

	// 글자 수 검사
	int lengthCheck(string a, string b) {
		double aLength = a.length();
		double bLength = b.length();

		if (aLength == bLength)
			return 60;
		else if (TwiceDifference(aLength, bLength)) {
			return 0;
		}
		else if (aLength > bLength) {
			return static_cast<int>((1 - (aLength - bLength) / bLength) * PartialScorePercent);
		}
		else { // aLength < bLength
			return static_cast<int>((1 - (bLength - aLength) / aLength) * PartialScorePercent);
		}
	}

	bool TwiceDifference(double aLen, double bLen)
	{
		return bLen >= (aLen * 2) || aLen >= (bLen * 2);
	}

	// 알파벳 검사
};