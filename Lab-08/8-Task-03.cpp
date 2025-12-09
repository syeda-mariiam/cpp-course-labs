#include <iostream>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    cout << "Select a shape to calculate the area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << PI * radius * radius << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle: " << length * width << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle: " << 0.5 * base * height << endl;
            break;
        }
        default:
            cout << "Error: Invalid choice!" << endl;
    }

    return 0;
}

