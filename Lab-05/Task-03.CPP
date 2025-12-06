#include <iostream>
using namespace std;

int main() {
    int x, y, z ;
    cout << "Enter  First number:";
    cin >> x ;
    
    cout << "Enter  Second number:";
    cin >> y ;
    
    cout << "Enter  Third number:";
    cin >> z ;
    
    if (x>= y && x >= z ) {
    cout <<  x << " is the largest." << endl;}
    
    if (y>= x && y >= z ) {
    cout <<  y << " is the largest." << endl;
}
    if (z>= x && z >= y ) {
    cout <<  z << " is the largest." << endl;
    }
    return 0; 
}

