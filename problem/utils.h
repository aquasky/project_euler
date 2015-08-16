#pragma once

// n % baseを計算
inline int mod(const int n, const int base) {
    return (n % base + ((n < 0) ? base : 0));
}

// nがbaseの倍数か
inline bool isMultiple(const int n, const int base) {
    if ((0 == n) || (0 >= base)) {
        return false;
    }
    return (mod(n, base) == 0);
}
