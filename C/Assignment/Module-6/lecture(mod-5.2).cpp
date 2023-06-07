#include<iostream>
using namespace std;
class clg
{
	public:
		string name[5],sub[5],course[5],remark[5];
		int lec[5];
		clg()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"Enter name:";
				cin>>name[i];
				cout<<"Enter subject:";
				cin>>sub[i];
				cout<<"Enter course:";
				cin>>course[i];
				cout<<"Enter number of lectures:";
				cin>>lec[i];
				cout<<"Enter remarks:";
				cin>>remark[i];
				cout<<"\n";
			}
		}	
		void display()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"DETAIL-"<<i+1<<"\n";
				cout<<"NAME:"<<name[i]<<"\n"<<"SUBJECT:"<<sub[i]<<"\n"<<"COURSE:"<<course[i]<<"\n"<<"LECTURES:"<<lec[i]<<"\n"<<"REMARKS:"<<remark[i]<<"\n";
			}
		}
};
main()
{
	clg obj;
	obj.display();
}
