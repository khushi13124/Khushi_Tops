#include<stdio.h>
main()
{
	int a,x=0;
	printf("Enter number:\n");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)        //modulo operator: 9%2=1   a%b= remainder of b/a
		{
			x+=1;	
		}
	}
	if(x==2)
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not a prime number");
	}
}
