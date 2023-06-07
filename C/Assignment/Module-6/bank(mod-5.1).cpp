#include<iostream>
using namespace std;
class bank
{
	public:
		string name,type;
		int num,amt,amtnew,with;
		bank()
		{
			cout<<"Enter your name:";
			cin>>name;
			cout<<"Enter your account number:";
			cin>>num;
			cout<<"Enter Type of account:";
			cin>>type;
			cout<<"Enter some initial amount in the account:";
			cin>>amt;
		}
		void deposit()
		{
			cout<<"Enter the amount you want to deposit";
			cin>>amtnew;
			amt+=amtnew;
		}
		void withdraw()
		{
			cout<<"Enter amount to withdraw:";
			cin>>with;
			if (with<=amt)
			{
				amt-=with;
				cout<<"Amount has been withdrawn"<<"\n";
				cout<<"Current balance is :"<<amt<<"\n";
			}
			else
			{
				cout<<"Insufficient balance ! Please deposit some amount first\n";
			}
		}
		void display()
		{
			cout<<"Your name is :"<<name<<"\n";
			cout<<"Your balance is:"<<amt<<"\n";
		}
};

main()
{
	int ch,n=1;
	bank obj;
	while (n!=0)
	{
		cout<<"What do you want to do \n\n";
		cout<<"1.Display name and Balance\n2.Deposit amount\n3.Withdraw amount\n";
		cout<<"Enter choice:";
		cin>>ch;
		if (ch==1)
		{
			obj.display();
		}
		else if (ch==2)
		{
			obj.deposit();
		}
		else if (ch==3)
		{
			obj.withdraw();
		}
		else
		{
			cout<<"Invalid choice\n";
		}
		cout<<"Enter 1 to continue or any other key to exit:";
		cin>>n;
 	}
}
