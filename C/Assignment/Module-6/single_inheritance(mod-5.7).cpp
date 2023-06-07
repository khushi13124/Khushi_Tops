#include<iostream>
using namespace std;
class cricketer{
	public:
		string name;
		int age;
		inp()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>age;
		}
};
class batsman:public cricketer{
	public:
		int t,b,num;
		float a;
		void input()
		{
			cout<<"Enter Total runs scored:";
			cin>>t;
			cout<<"Enter your best performance:";
			cin>>b;
		}
		void average()
		{
			cout<<"Enter total matches played:";
			cin>>num;
			a=t/float(num);
		}
		void display()
		{
			cout<<"-------------------------------------\n";
			cout<<"NAME : "<<name<<"\n";
			cout<<"AGE : "<<age<<"\n";
			cout<<"TOTAL RUNS : "<<t<<"\n";
			cout<<"BEST PERFORMANCE : "<<b<<"\n";
			cout<<"AVERAGE SCORE : "<<a<<"\n";
		}
};

main()
{
	batsman obj;
	obj.inp();
	obj.input();
	obj.average();
	obj.display();
}
