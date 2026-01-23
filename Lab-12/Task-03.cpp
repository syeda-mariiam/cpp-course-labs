// Task: Write a C++ program that defines a function to determine whether a given number is even or odd. The function should take an integer input and print "Even" if divisible by 2, otherwise print "Odd". Call this function from main() with different values.

#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is Even" << endl;
    } else {
        cout << num << " is Odd" << endl;
    }
}

int main() {
    checkEvenOdd(10);
    checkEvenOdd(7);
    checkEvenOdd(0);
    checkEvenOdd(-3);

    return 0;
}

