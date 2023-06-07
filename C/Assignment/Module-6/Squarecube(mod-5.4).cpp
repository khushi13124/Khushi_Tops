#include<iostream>
using namespace std;
class math
{
	public:
		int n;
		math()
		{
			cout<<"Enter a value:";
			cin>>n;
		}
		void sq()
		{
			cout<<"Multiplicative value is:"<<n*n<<"\n";
		}
		void cubic()
		{
			cout<<"Cubic value is:"<<n*n*n<<"\n";
		}
};
main()
{
	math obj;
	obj.sq();
	obj.cubic();
}
