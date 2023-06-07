#include<iostream>
using namespace std;
class current{
	public:
		int bal,sc=0,ch,wd;
		current()
		{
			cout<<"Enter your balance:";
			cin>>bal;
			if(bal<=5000)
			{
				cout<<"Dear User,You don't have enough balance.You have to pay a service charge of rs.100";
				sc+=100;
				bal-=sc;
			}
			else
			{
				cout<<"Do you want to withdraw money?(0 for no, 1 for yes)";
				cin>>ch;
				if(ch==1)
				{
					cout<<"Enter money to withdraw";
					cin>>wd;
					bal-=wd;
					cout<<"Balance is "<<bal;
				}
				else if(ch==2)
				{
					cout<<"Thank you for visiting";
				}
				else
				{
					cout<<"Invalid input";
				}
			}
		}
};
class saving{
	public:
		int p,r,t;
		saving()
		{
			cout<<"Enter savings balance:";
			cin>>p;
			cout<<"Your interest is "<<(p*10*1)/100<<" for 1 year at 10% rate of interest";
			p-=(p*10*1)/100;
		}
};

main()
{
	int s;
	cout<<"1.Current\n2.Savings\nSelect:";
	cin>>s;
	if(s==1)
	{
		current obj;
	}
	else if(s==2)
	{
		saving obj1;
	}
	else
	{
		cout<<"Invalid input";
	}
}
