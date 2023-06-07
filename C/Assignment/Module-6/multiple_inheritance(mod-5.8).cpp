#include<iostream>
using namespace std;
class person{
	public:
		string name;
		int age;
		person()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>age;
		}
		void display1()
		{
			cout<<"NAME:"<<name<<"\n";
			cout<<"AGE:"<<age<<"\n";
		}
};
class student{
	public:
		int per;
		student()
		{
			cout<<"Enter percentage:";
			cin>>per;
		}
		void display2()
		{
			cout<<"PERCENTAGE:"<<per<<"\n";
		}
};
class teacher{
	public:
		int salary;
		teacher()
		{
			cout<<"Enter salary:";
			cin>>salary;
		}
		void display3()
		{
			cout<<"SALARY:"<<salary<<"\n";
		}
};
class derive:public person,public student,public teacher{
	public:
};

main()
{
	derive obj;
	obj.display1();
	obj.display2();
	obj.display3();
}
