#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        int rowsum = 0;
        for (int j = 0; j < 4; j++) {
            rowsum += arr[i][j];
        }
        cout << rowsum << "\n";
    }

    return 0;
}