#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int start, end;
    cin >> start >> end;

    int count = 0;
    for (int i = start; i < end + 1; i++) {
        int flag = 0;
        for (int j = 1; j < i + 1; j++) {
            if (i % j == 0) {
                flag++;
            }
        }
        if (flag == 3) {
            count++;
        }
    }
    cout << count;

    return 0;
}