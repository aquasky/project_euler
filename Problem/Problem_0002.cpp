#include "Common.h"

/*
 * Problem 2
 * フィボナッチ数列の項は前の2つの項の和である. 最初の2項を 1, 2 とすれば,
 * 最初の10項は以下の通りである.
 *   1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * 数列の項の値が400万以下の, 偶数値の項の総和を求めよ.
 */

template <typename T>
struct Fibonacci {
    constexpr Fibonacci() : a(-1), b(1) {}
    constexpr Fibonacci(T _a, T _b) : a(_a), b(_b) {}
    T operator()() {
        std::swap(a, b);
        return b += a;
    }

    T a;
    T b;
};

void problem_0002() {
    StopWatch<std::chrono::nanoseconds> sw;

    std::array<long, 34> ary = {};
    std::generate(ary.begin(), ary.end(), Fibonacci<long>());

    long sum = 0;
    for (int n : ary) {
        if (isMultiple(n, 2)) {
            sum += n;
        }
    }

    printf("Problem 2 Answer[%ld], Time[%s[ns]]\n", sum,
           sw.GetElapsedTime().c_str());
}
