#include <iostream>
using namespace std;

int main() {
    char signal;

    cout << "Enter traffic signal color (R/G/Y): ";
    cin >> signal;

    if (signal =='r' || signal =='R') {
    cout << "Stop" << endl;
    }
    if (signal =='g' || signal =='G') {
    cout << "Go" << endl;
    }
    if (signal =='y' || signal =='Y') {
    cout << "Slow Down" << endl;
    }
    return 0;
}

