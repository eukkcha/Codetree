#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int arr[N][N];
    for (int j = 0; j < N; j++) {
        if (j % 2 == 0) { // 0 2 4 6 8...
            for (int i = 0; i < N; i++) {
                arr[i][j] = i + 1;
            }
        }
        else {
            for (int i = 0; i < N; i++) {
                arr[i][j] = N - i;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}