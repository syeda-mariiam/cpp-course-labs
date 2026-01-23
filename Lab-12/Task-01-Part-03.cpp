// Task: Write a program to calculate the sine of a number (in radians) entered by the user.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cin >> num;

    double result = sin(num);
    cout << "Sine: " << result << endl;

    return 0;
}

