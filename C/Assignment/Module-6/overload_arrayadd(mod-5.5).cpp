#include<iostream>
using namespace std;
struct add                                           //structure of array 1,2 and output array
{
    int ar[20];
};
add operator+(add &a1,add &a2)                      // structure objects a1,a2
{
    add a3;                                         //structure object a3
    for(int i=0;i<5;i++)
    {
        a3.ar[i]=a2.ar[i]+a1.ar[i];
    }
    return a3;
}
int main()
{
    add a1,a2,a3;
    for(int i=0;i<5;i++)                                   //Input array 1
    {
    	cout<<"Enter element of array a1 : ";
        cin>>a1.ar[i];
    }
    for(int i=0;i<5;i++)                                  //Input array 2
    {
    	cout<<"Enter element of array a2 : ";
        cin>>a2.ar[i];
    }
    a3=a1+a2;                                             //Array addition by overloaded operator
    cout<<"Addition of two arrays : ";
    for(int i=0;i<5;i++)
    {
        cout<<a3.ar[i]<<" ";
    }
    return 0;
}
