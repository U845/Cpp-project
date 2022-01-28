#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Bank
{
	char name[100],add[100],y;
	int balance;
	public:
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display_account();

};
void Bank :: open_account()
{
	cout<<"Enter your full name :: ";
	cin.ignore();
	cin.getline(name,100);
	cout<<"\nEnter your address :: ";
	cin.ignore();
	cin.getline(add,100);
	cout<<"\nWhat type of account you want to open saving (s) or current (c) ";
	cin>>y;
	cout<<"\nEnter amount for deposit :: ";
	cin>>balance;
	cout<<"\nYour account is created.\n";
}
void Bank :: deposit_money()
{
	int a;
	cout<<"\nEnter how much you deposit :: ";
	cin>>a;
	balance+=a;
	cout<<"\nTotal amount you deposit :: \t "<<balance<<endl;

 }
 void Bank :: display_account()
 {
 	cout<<"\nYour full name :: \t"<<name;
 	cout<<"\nYour address :: \t"<<add;
 	cout<<"\nType of account that you open :: \t"<<y;
 	cout<<"\nAmount you deposit :: \t"<<balance;
 }
 void Bank :: withdraw_money()
 {
 	float amount;
 	cout<<"\n WITHDRAW :: ";
 	cout<<"\nEnter amount to withdraw :: ";
 	cin>>amount;
 	balance-=amount;
 	cout<<"\nNow total amount is left :: "<<balance;
 }
 int main()
 {
 	int ch,x;
 	Bank obj;
 	do
	 {
	 	cout<<"1) Open account \n";
 		cout<<"2) Deposit money \n";
 		cout<<"3) Withdraw money \n";
 		cout<<"4) Display account \n";
 		cout<<"5) Exit \n";
	 	cout<<"Select the option from above \n";
 		cin>>ch;
 		switch(ch)
 		{
 			case 1: "1) Open account \n";

 			obj.open_account();
 			break;

 			case 2:
			cout<<"2) Deposit Money \n";
 			obj.deposit_money();
 			break;

 			case 3:
			cout<<"3) Withdraw money \n";
			obj.withdraw_money();
			break;

			case 4:

				cout<<"Display account \n";
				obj.display_account();
				break;

			case 5:
				if(ch==5)
				{
					exit(1);
				}
				default:
					cout<<"This is not exist,Try again \n";
		}
		cout<<"\nDo you want to select next option then press :: y \n";
		cout<<"if you want to exit then press :: N ";
		x=getch();

		if(x=='n' || x=='N')
		{
			exit(0);
		}
	}while(x=='y'||x=='Y');
	return 0;
 }
