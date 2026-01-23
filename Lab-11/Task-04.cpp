// Task: Write a program that initializes an array of integers and calculates and prints the size (length) of the array.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of the array: " << length << endl;

    return 0;
}

