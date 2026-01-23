// Task: Write a C++ program to declare a pointer, initialize it to nullptr, and check whether it points to valid memory. Display an appropriate message.

#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr;

    if (ptr == nullptr) {
        cout << "The pointer is null and does not point to any valid memory." << endl;
    } else {
        cout << "The pointer points to memory address: " << ptr << endl;
    }

    return 0;
}

