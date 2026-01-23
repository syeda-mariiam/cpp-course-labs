// Task: Write a program that initializes an array of integers, computes the sum and average of all elements, and displays the results.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}

