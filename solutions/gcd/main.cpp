#include "main.h"

// using euclid algorithm
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// using extended euclid algorithm
int gcd_extend(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcd_extend(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

int gcd_arr(int *arr, int size) {
    if (size < 1) return 1;
    if (size == 2) return gcd(arr[0], arr[1]);

    int result = arr[0];
    for (int i = 1; i < size; i++) {
        result = gcd(result, arr[i]);

        if (result == 1) return 1;
    }
    return result;
}
