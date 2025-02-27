#include<iostream>
using namespace std;
class Bank
{
	int acc_no;
	string acc_name;
	int balance;
		
	public : 
			void get_Account();
			void print_Account();
			void deposite();
			void withdraw();
			int get_balance();
			
};

void Bank :: get_Account()
{
	cout<<"\n\n\t Input Account Number : ";
	cin>>acc_no;
	cout<<"\n\n\t Input Account Holder Name : ";
	cin>>acc_name;
	cout<<"\n\n\t Input Balance Amount : ";
	cin>>balance;		
}	
			
void Bank :: print_Account()
{
		cout<<"\n\n\t --------------------------------";
		cout<<"\n\n\t Account Number : "<<acc_no;
		cout<<"\n\n\t Account Holder Name : "<<acc_name;
		cout<<"\n\n\t Available Balance Amount : "<<balance;
		cout<<"\n\n\t --------------------------------";		
}

void Bank :: deposite()
{
	int amnt;
	cout<<"\n\n\n\t Input an amount to deposite : ";
	cin>>amnt;
	
	balance=balance+amnt;
	
	cout<<"\n\n\n\t Now, Available balance = "<<balance;
}

void Bank :: withdraw()
{
	int amnt;
	cout<<"\n\n\n\t Input an amount to withdraw : ";
	cin>>amnt;
	
	if(balance>amnt)
		balance=balance-amnt;
	else
		cout<<"\n\n\t Withdrawal is not possible because of insufficient balance ..";
	
	cout<<"\n\n\n\t Now, Available balance = "<<balance;
}

int Bank :: get_balance()
{
	return balance;
}
			
			
main()
{
	Bank B;
	B.get_Account();
	
	while(1)
	{
	
	cout<<"\n\n\t Press 1 for displaying the account holder info. ";
	cout<<"\n\n\t Press 2 for deposite ";
	cout<<"\n\n\t Press 3 for withdrawal ";
	cout<<"\n\n\t Press 4 for checking the balance";
	
	cout<<"\n\n\t -----------------------------------------";
	
	cout<<"\n\n\t Select the choice of transaction : ";
	int ch;
	cin>>ch;
	
	
	if(ch==1)
			B.print_Account();	
		
	else if(ch==2)
		B.deposite();
		
	else if(ch==3)
		B.withdraw();
		
	else if(ch==4)
	{	
		int bal=B.get_balance();
		cout<<"\n\n\n\t Available Balance = Rs. "<<bal;
	}
	
	else
		cout<<"\n\n\t Invalid Choice!!!!!";	
}
}
