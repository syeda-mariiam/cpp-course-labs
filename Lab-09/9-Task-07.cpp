#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;
    char orderAgain;
    float quantity;
    float totalBill = 0;

    do {
        cout << "\n====== WELCOME TO THE RESTAURANT ======\n";
        cout << "1. Fast Food\n";
        cout << "2. BBQ\n";
        cout << "3. Karahi\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch (mainChoice) {
        case 1: // Fast Food
            cout << "\n--- Fast Food Menu ---\n";
            cout << "1. Zinger Burger (Rs. 350)\n";
            cout << "2. Pizza (Rs. 1200)\n";
            cout << "Enter item choice: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1)
                totalBill += 350 * quantity;
            else if (subChoice == 2)
                totalBill += 1200 * quantity;
            else
                cout << "Invalid item choice!\n";
            break;

        case 2: // BBQ
            cout << "\n--- BBQ Menu ---\n";
            cout << "1. Chicken Tikka (Rs. 300)\n";
            cout << "2. Malai Boti (Rs. 450)\n";
            cout << "Enter item choice: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1)
                totalBill += 300 * quantity;
            else if (subChoice == 2)
                totalBill += 450 * quantity;
            else
                cout << "Invalid item choice!\n";
            break;

        case 3: // Karahi
            cout << "\n--- Karahi Menu ---\n";
            cout << "1. Chicken Karahi (Rs. 1800 per KG)\n";
            cout << "2. Mutton Karahi (Rs. 3000 per KG)\n";
            cout << "Enter item choice: ";
            cin >> subChoice;

            cout << "Enter quantity (in KG): ";
            cin >> quantity;

            if (subChoice == 1)
                totalBill += 1800 * quantity;
            else if (subChoice == 2)
                totalBill += 3000 * quantity;
            else
               cout << "Invalid item choice!\n";
            break;

        case 4:
            cout << "Exiting order menu...\n";
            break;

        default:
            cout << "Invalid main menu choice!\n";
        }

        cout << "\nDo you want to order more? (y/n): ";
        cin >> orderAgain;

    } while (orderAgain == 'y' || orderAgain == 'Y');

    cout << "\n====== TOTAL BILL ======\n";
    cout << "Total Amount to Pay: Rs. " << totalBill << endl;
    cout << "Thank you for ordering! ??\n";

    return 0;
}

