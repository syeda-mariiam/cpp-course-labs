#include <iostream>
using namespace std;

int main(){
double balance=1000;
int choice;
double amount;
while(true){
cout<<"\n1.Deposit  2.Withdraw  3.Check Balance  4.Exit\n";
cout<<"Enter choice:";
cin>>choice;
if(choice==1){
cout<<"Enter amount to deposit:";
cin>>amount;
balance+=amount;
cout<<"Deposited "<<amount<<endl;
}
else if(choice==2){
cout<<"Enter amount to withdraw:";
cin>>amount;
if(amount>balance){
cout<<"Insufficient balance\n";
}else{
balance-=amount;
cout<<"Withdrawn "<<amount<<endl;
}
}
else if(choice==3){
cout<<"Balance is "<<balance<<endl;
}
else if(choice==4){
cout<<"Exiting...\n";
break;
}
else{
cout<<"Invalid choice\n";
}
}
return 0;
}

