#include <iostream>
using namespace std;

int main() {
    string password;
    string correctPassword = "12345"; 

    do {
        cout << "Enter password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Incorrect password. Try again.\n";
        }

    } while (password != correctPassword);

    cout << "Access granted. Password is correct!\n";

    return 0;
}

