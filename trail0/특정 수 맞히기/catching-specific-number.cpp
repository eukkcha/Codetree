#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num;
    while (1) {
        cin >> num;
        if (num < 25) {
            cout << "Higher\n";
        }
        else if (num > 25) {
            cout << "Lower\n";
        }
        else {
            cout << "Good\n";
            break;
        }
    }

    return 0;
}