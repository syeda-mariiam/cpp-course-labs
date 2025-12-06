#include<iostream>
using namespace std;
int main (){
	double accountBalance;
	int loyal;
	
	cout << "Enter Your bank account balance " << endl;
	cin >> accountBalance;
	
		string accountType = ( accountBalance < 100 )?  "Low balance account" : ( accountBalance<=500)? "Standard Account" : "Premium Account" ;
		cout << "Account Type:" << accountType << endl;
	
	cout << "Are you a loyal customer? (1 for Yes and 0 for no):" << endl;
	cin >> loyal ;
	

	string offer = ( accountBalance>200 && loyal== 1 ) ? "Eligible for special offer " : "Not eligible for special offer" ;
	
	
	cout << "Special Offer Status: " << offer << endl;
	
	return 0;
	
}
