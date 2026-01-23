// Task: Write a program to calculate the square root of a number entered by the user.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cin >> num;

    double result = sqrt(num);
    cout << "Square root: " << result << endl;

    return 0;
}

