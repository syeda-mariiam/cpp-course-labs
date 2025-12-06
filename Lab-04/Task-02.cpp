#include<iostream>
using namespace std;
int main(){
	int age;
	cout << " Enter your age " << endl;
	cin >> age;
	
	string ageGroup = ( age<13 )? "Child" : ( age<=19)? "Teenager" : " Adult";
	cout << "The age " << age << " falls under the category " << ageGroup << endl;
	return 0 ;
}
