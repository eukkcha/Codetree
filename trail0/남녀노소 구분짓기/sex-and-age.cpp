#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int gender, old;
    cin >> gender;
    cin >> old;

    if (old >= 19) {
        if (gender == 0) {
            cout << "MAN";
        }
        else {
            cout << "WOMAN";
        }
    }
    else {
        if (gender == 0) {
            cout << "BOY";
        }
        else {
            cout << "GIRL";
        }
    }

    return 0;
}