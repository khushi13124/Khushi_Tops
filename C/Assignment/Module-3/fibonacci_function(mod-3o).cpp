#include<stdio.h>
int fibonacci(int n)
{
	int a=0,b=1,c;
	printf("Fibonacci series of %d elements:",n);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	fibonacci(n);
}
