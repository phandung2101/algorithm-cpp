#include "main.h"

// using euclid algorithm
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// using extended euclid algorithm
long long gcd_extend(long long a, long long b, long long *x, long long *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    long long x1, y1;
    long long gcd = gcd_extend(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}
