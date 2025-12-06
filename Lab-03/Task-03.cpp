# include <iostream>
using namespace std; 
int main (){
	float item1Price = 12.95;
	float item2Price = 24.95;
	float item3Price = 6.95;
	float item4Price = 14.95;
	float item5Price = 3.95;
	
	double subTotal = item1Price+ item2Price + item3Price + item4Price + item5Price ;
	const double TAX_RATE = 0.06;
	double salesTax = subTotal*TAX_RATE;
	double total= subTotal+ salesTax;
	cout << " Price of item  1: $ " << item1Price << endl; 
	cout << " Price of item  2: $ " << item2Price << endl;
	cout << " Price of item  3: $ " << item3Price << endl;
	cout << " Price of item  4: $ " << item4Price << endl ;
	cout << " Price of item  5: $ " << item5Price << endl ;
	cout << " Subtotal: $" << subTotal << endl;
	cout << " Sales Tax (6%): $" << salesTax << endl;
	cout << " Total: $ " << total ;
	return 0;	
	
	
	}

