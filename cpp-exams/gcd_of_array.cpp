#include "iostream"
#include "../solutions/gcd/main.h"
#include "math.h"

using namespace std;

/*
 * Cho hai hàm h(x) và g(x) xác định trên tập các số tự nhiên A[] gồm n phần tử.
 * Trong đó, h(x) là tích của các số trong mảng A[], g(x) là ước số chung lớn nhất của các số trong mảng A[].
 * Nhiệm vụ của bạn là tìm giá trị h(x)^g(x).
 * Chú ý, khi lời giải cho kết quả lớn hãy đưa ra giá trị modulo với 10^9+7.
 * Input:
 - Dòng đầu tiên đưa vào T là số lượng bộ test.
 - T dòng tiếp đưa các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào số n là số các phần tử của mảng A[];
 dòng tiếp theo đưa vào n số tự nhiên phân biệt nhau bởi một vài khoảng trống.
 • Các số T, N, A[i] thỏa mãn ràng buộc: 1≤T≤26; 1≤n≤60; 1≤A[i]≤104; Output:
 - Đưa ra kết quả mỗi test theo từng dòng.
 * */

void gcd_of_array() {
    int n;
    cin >> n;
    while (n-- > 0) {
        int i, size;
        cin >> size;
        int list[size];
        for (i = 0; i < size; i++) {
            cin >> list[i];
        }
        int hx = 1;
        for (i = 0; i < size; i++) {
            hx *= list[i];
        }
        int gx = gcd_arr(list, size);
        cout << gx << endl;
        cout << hx << endl;
        cout << pow(hx, gx) << endl;
    }
}
