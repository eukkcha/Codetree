#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    for (int i = 1; i < N + 1; i++) {
        if (i % 2 != 0) { // 홀수행일 때
            for (int j = 1; j < N + 1; j++) {
                cout << j;
            }
        }
        else {
            for (int j = N; j > 0; j--) {
                cout << j;
            }
        }
        cout << "\n";
    }

    return 0;
}