#include<iostream>
using namespace std;
class Interest
{
	public:
		int SI;
		Interest(int principal, int year, int rate)
		{
			SI=(principal*year*rate)/100;
			cout<<"Simple interest is:"<<SI<<"\n";
		}
};
main()
{
	int p,r,t;
	cout<<"Enter principal amount:";
	cin>>p;
	cout<<"Enter years:";
	cin>>t;
	cout<<"Enter rate of interest:";
	cin>>r;
	Interest obj(p,t,r);
}
