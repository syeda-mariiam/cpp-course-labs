#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount;

    cout << "Currency Converter (USD to other currencies)\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to INR\n";
    cout << "3. USD to Euros\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the amount in USD: ";
    cin >> amount;

    switch(choice) {
        case 1:
            cout << "Amount in PKR: " << amount * 285.0 << endl;  // example rate
            break;
        case 2:
            cout << "Amount in INR: " << amount * 83.0 << endl;   // example rate
            break;
        case 3:
            cout << "Amount in Euros: " << amount * 0.92 << endl; // example rate
            break;
        default:
            cout << "Error: Invalid choice!" << endl;
    }

    return 0;
}

