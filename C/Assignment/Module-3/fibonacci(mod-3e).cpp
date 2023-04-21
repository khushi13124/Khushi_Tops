#include<stdio.h>
main()
{
	int ul,a=1,b=1,c,d;
	printf("Enter upper limit to print fibonacci series:");
	scanf("%d",&ul);
	printf("Fibonacci series is:");
	printf("0 1 1 ");
	for(int i=1;i<=(ul-3);i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
}
//logic: 0 1 (0+1=1) (1+1=2) ie; each time b becomes a,c=a+b becomes b and c=a+b
