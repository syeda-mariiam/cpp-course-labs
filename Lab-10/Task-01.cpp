// Task: Write a program to print all numbers from 1 to N, where N is entered by the user.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }

    return 0;
}

