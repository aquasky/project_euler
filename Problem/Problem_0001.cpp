#include "Common.h"

/*
 * Problem 1
 *	10未満の自然数のうち, 3 もしくは 5 の倍数になっているものは
 *	3, 5, 6, 9 の4つがあり, これらの合計は 23 になる.
 *	同じようにして, 1000 未満の 3 か 5 の倍数になっている数字の合計を求めよ.
 */

namespace {
constexpr int solve() {
	int sum = 0;
	for (int i = 0; i < 1000; ++i) {
		if (((i % 3) == 0) || ((i % 5) == 0)) {
			sum += i;
		}
	}
	return sum;
}
};

void problem_0001() {
	StopWatch<std::chrono::nanoseconds> sw;
	constexpr int answer = solve();
	assert(answer == 233168);
	printf("Problem 1 Answer[%d], Time[%s[ns]]\n", answer,
	       sw.GetElapsedTime().c_str());
}
