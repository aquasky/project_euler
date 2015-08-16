#include "common.h"

/*
 * Problem 1
 *	10未満の自然数のうち, 3 もしくは 5 の倍数になっているものは
 *	3, 5, 6, 9 の4つがあり, これらの合計は 23 になる.
 *	同じようにして, 1000 未満の 3 か 5 の倍数になっている数字の合計を求めよ.
 */

void solve_0001() {
	printf("Solve 0001\n");
	printf("%d,%d,%d\n", IsMultiple(-5, 2), IsMultiple(4, 2), IsMultiple(0, 2));
}


