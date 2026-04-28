#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;
    double avg = double(A + B)/2;
    
    cout << A + B << " ";
    cout << fixed;
    cout.precision(1);
    cout << avg;
    
    return 0;
}