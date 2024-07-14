#include "main.h"

long long fibo(long long step) {
    if (step == 0) return 0;
    if (step == 1) return 1;

    long long x = 0, y = 1;
    long long i = step;
    long long sum;
    while (i > 0) {
        sum = x + y;
        if (x > y) {
            y = sum;
        } else {
            x = sum;
        }
        i--;
    }
    return x > y ? x : y;
}
