#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password, role;

    string correctUsername = "admin";
    string correctPassword = "password123";

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword) {
        cout << "Authentication Successful!" << endl;

        cout << "Enter your role: ";
        cin >> role;

        if (role == "Admin") {
            cout << "Full Access" << endl;
        } else if (role == "Guest") {
            cout << "Limited Access" << endl;
        } else {
            cout << "No Access" << endl;
        }

    } else {
        cout << "Authentication Failed. Access Denied." << endl;
    }

    return 0;
}

