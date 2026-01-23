// Task: Write a program to calculate the absolute value of a number entered by the user.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cin >> num;

    double result = abs(num);
    cout << "Absolute value: " << result << endl;

    return 0;
}

