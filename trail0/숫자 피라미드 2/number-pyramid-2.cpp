#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int num = 1;
    for (int i = 1; i < N + 1; i++) {
        for (int j = 0; j < i; j++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }

    return 0;
}