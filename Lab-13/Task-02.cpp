#include <iostream>
using namespace std;

int main() {
    int num = 5;     
    int *ptr = &num;  
    *ptr = 20;
    cout << "Modified value of num: " << num << endl;

    return 0;
}

