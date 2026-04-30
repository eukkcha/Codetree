#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    while(N) {
        cout << N << "\n";
        N /= M;
    }

    return 0;
}
