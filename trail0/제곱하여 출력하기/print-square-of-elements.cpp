#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, a[100];
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        cout << a[i] * a[i] << " ";
    }

    return 0;
}