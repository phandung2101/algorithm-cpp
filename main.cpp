#include <iostream>
#include "solutions/gcd/main.h"
#include "solutions/fibonacci/main.h"

using namespace std;

int main() {
    int x, y;
    x = fibo(20);
    y = fibo(21);
    int i, j;
    cout << gcd_extend(35, 15, &i, &j) << endl;
}
