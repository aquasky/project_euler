#include <cstdio>

// n % baseを計算
inline int Mod(const int n, const int base) {
	return (n % base + ((n < 0) ? base : 0));
}

// nがbaseの倍数か
inline bool IsMultiple(const int n, const int base) {
	if ((0 == n) || (0 >= base)) { return false; }
	return (Mod(n, base) == 0);
}

