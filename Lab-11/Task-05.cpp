// Task: Write a program that prompts the user to input an array of N integers and displays the largest number.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest number: " << largest << endl;

    return 0;
}

