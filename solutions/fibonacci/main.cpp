#include "main.h"

int fibo(int step) {
    if (step == 0) return 0;
    if (step == 1) return 1;

    int x = 0, y = 1;
    int i = step;
    int sum;
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
