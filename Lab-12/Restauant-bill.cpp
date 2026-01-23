#include <iostream>
using namespace std;

// Function to display the food menu
void displayMenu() {
    cout << "\n--- Restaurant Menu ---\n";
    cout << "1. Burger        - $5.00\n";
    cout << "2. Pizza         - $8.00\n";
    cout << "3. Pasta         - $6.50\n";
    cout << "4. Sandwich      - $4.00\n";
    cout << "5. Coffee        - $2.50\n";
    cout << "6. Exit\n";
}

// Function to calculate cost of selected item
double calculateItemCost(int choice, int quantity) {
    double price = 0;

    switch (choice) {
        case 1: price = 5.00; break;
        case 2: price = 8.00; break;
        case 3: price = 6.50; break;
        case 4: price = 4.00; break;
        case 5: price = 2.50; break;
        default: price = 0;
    }

    return price * quantity;
}

// Function to calculate final bill with service charge (10%)
double calculateFinalBill(double total) {
    double serviceCharge = total * 0.10;
    return total + serviceCharge;
}

int main() {
    int choice, quantity;
    double totalBill = 0;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter quantity: ";
            cin >> quantity;

            totalBill += calculateItemCost(choice, quantity);
            cout << "Item added to bill.\n";
        }
        else if (choice == 6) {
            break;
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (true);

    double finalAmount = calculateFinalBill(totalBill);

    cout << "\nTotal Bill (before tax): $" << totalBill;
    cout << "\nService Charge (10%): $" << totalBill * 0.10;
    cout << "\nFinal Amount to Pay: $" << finalAmount;

    return 0;
}

