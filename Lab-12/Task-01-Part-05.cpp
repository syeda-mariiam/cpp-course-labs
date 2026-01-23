// Task: Write a program to calculate the cube (power of 3) of a number entered by the user.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cin >> num;

    double result = pow(num, 3);
    cout << "Power of 3: " << result << endl;

    return 0;
}

