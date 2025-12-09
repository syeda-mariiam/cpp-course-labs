#include <iostream>
using namespace std;
int main (){
	int num1,num2;
	char op;
	cout << "Enter Number 1 \n";
	cin>>num1;
	cout << "Enter second number \n";
	cin >> num2;
	cout << "Enter the operation\n";
	cin >> op;
	
	switch (op){
		case '+' : {
			cout << num1+num2 << endl;
			break;
		}
			case '-' : {
			cout << num1-num2 << endl;
			break;
		}
			case '*': {
			cout << num1*num2 << endl;
			break;
		}
			case '/': {
			cout << num1/num2 << endl;
			break;
		}
		default:{
			cout << "error\n";
			break;
		}
		
	}
	return 0;
	
}
