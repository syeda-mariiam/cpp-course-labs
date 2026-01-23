// Task: Write a program to calculate the sum of the first N natural numbers (1 to N), where N is entered by the user.

#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << sum;
    return 0;
}

