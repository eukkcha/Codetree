#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num;
    int mul3 = 0;
    int mul5 = 0;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num % 3 == 0) {
            mul3++;
        }
        if (num % 5 == 0) {
            mul5++;
        }
    }

    cout << mul3 << " " << mul5;

    return 0;
}