#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C;
    cin >> A >> B >> C;

    if ((B < A && A < C) || (C < A && A < B)) {
        cout << A;
    }
    else if ((A < B && B < C) || (C < B && B < A)) {
        cout << B;
    }
    else if ((B < C && C < A) || (A < C && C < B)) {
        cout << C;
    }

    return 0;
}