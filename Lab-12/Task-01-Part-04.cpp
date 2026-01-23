// Task: Write a program to calculate the cosine of a number (in radians) entered by the user.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cin >> num;

    double result = cos(num);
    cout << "Cosine: " << result << endl;

    return 0;
}

