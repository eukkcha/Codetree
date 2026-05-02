#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char ch;
    cin >> ch;
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    
    int flag = 0;
    for (int i = 0; i < 5; i++) {
        if (str[i][2] == ch || str[i][3] == ch) {
            cout << str[i] << "\n";
            flag++;
        }
    }
    cout << flag;

    return 0;
}