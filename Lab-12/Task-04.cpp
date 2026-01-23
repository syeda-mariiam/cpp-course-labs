// Task: Write a C++ program that defines a function to compute the factorial of a given number using a loop. Prompt the user to enter a number and display the factorial.

#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    long long result = factorial(num);
    cout << "Factorial of " << num << " is " << result << endl;

    return 0;
}

