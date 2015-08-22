#include "Common.h"

/*
 * Problem 1
 *	10未満の自然数のうち, 3 もしくは 5 の倍数になっているものは
 *	3, 5, 6, 9 の4つがあり, これらの合計は 23 になる.
 *	同じようにして, 1000 未満の 3 か 5 の倍数になっている数字の合計を求めよ.
 */

void problem_0001() {
    StopWatch<std::chrono::nanoseconds> sw;
    int sum = 0;
    for (int i = 1; i < 1000; ++i) {
        if (isMultiple(i, 3) || isMultiple(i, 5)) {
            sum += i;
        }
    }

    assert(sum == 233168);
    printf("Problem 1 Answer[%d], Time[%s[ns]]\n", sum,
           sw.GetElapsedTime().c_str());
}
