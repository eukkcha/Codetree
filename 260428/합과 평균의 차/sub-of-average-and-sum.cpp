#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    
    double sum, avg, result;
    sum = double(a + b + c);
    avg = double(sum / 3);
    result = sum - avg;

    cout << sum << "\n";
    cout << avg << "\n";
    cout << result;

    return 0;
}