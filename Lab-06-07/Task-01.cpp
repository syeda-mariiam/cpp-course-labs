#include<iostream>
using namespace std;
int main (){
	int num;
	cout << "Enter a number" << endl;
	cin >> num;
	
	if( num>0) {
		cout << "The number " << num << " is positive"  << endl;}
		
	else if ( num < 0 ){
			cout << "The number " << num  <<" is negative" << endl;}
			
	else 
	{ cout << "The number is 0 " << endl;
	}
	return 0;
}
