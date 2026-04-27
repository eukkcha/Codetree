#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int weight = 13;
    double wrate = 0.165;

    cout << fixed;

    cout << weight << " * ";
    cout.precision(6);
    cout << wrate << " = " << weight*wrate;
    return 0;
}