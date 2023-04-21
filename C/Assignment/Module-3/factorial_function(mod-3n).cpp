#include<stdio.h>
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("Factorial is:%d",fact);
	return 0;
}
main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	factorial(n);
}
