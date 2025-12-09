#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int category, item, quantity;
    double price = 0, total = 0, discount = 0, finalAmount = 0;
    string categoryName, itemName;

    cout << "===== Shopping System =====\n";
    cout << "Select Category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Enter your choice: ";
    cin >> category;

    switch (category) {
        case 1:
            categoryName = "Electronics";
            cout << "\n1. Laptop ($1000)\n2. Smartphone ($700)\n3. Headphones ($150)\n";
            cout << "Select item: ";
            cin >> item;

            if (item == 1) { itemName = "Laptop"; price = 1000; }
            else if (item == 2) { itemName = "Smartphone"; price = 700; }
            else if (item == 3) { itemName = "Headphones"; price = 150; }
            else { cout << "Invalid item selection!\n"; return 0; }
            break;

        case 2:
            categoryName = "Clothing";
            cout << "\n1. Jacket ($120)\n2. T-shirt ($40)\n3. Jeans ($60)\n";
            cout << "Select item: ";
            cin >> item;

            if (item == 1) { itemName = "Jacket"; price = 120; }
            else if (item == 2) { itemName = "T-shirt"; price = 40; }
            else if (item == 3) { itemName = "Jeans"; price = 60; }
            else { cout << "Invalid item selection!\n"; return 0; }
            break;

        case 3:
            categoryName = "Groceries";
            cout << "\n1. Milk (1 Liter - $2)\n2. Bread (1 Loaf - $3)\n3. Eggs (1 Dozen - $5)\n";
            cout << "Select item: ";
            cin >> item;

            if (item == 1) { itemName = "Milk"; price = 2; }
            else if (item == 2) { itemName = "Bread"; price = 3; }
            else if (item == 3) { itemName = "Eggs"; price = 5; }
            else { cout << "Invalid item selection!\n"; return 0; }
            break;

        default:
            cout << "Invalid category selection!\n";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    total = price * quantity;

    if (total < 100)
        discount = 0;
    else if (total <= 500)
        discount = total * 0.10;
    else
        discount = total * 0.20;

    finalAmount = total - discount;

    cout << "\n===== Invoice =====\n";
    cout << fixed << setprecision(2);
    cout << "Category   : " << categoryName << endl;
    cout << "Item       : " << itemName << endl;
    cout << "Price/unit : $" << price << endl;
    cout << "Quantity   : " << quantity << endl;
    cout << "Total      : $" << total << endl;
    cout << "Discount   : $" << discount << endl;
    cout << "Final Bill : $" << finalAmount << endl;

    return 0;
}

