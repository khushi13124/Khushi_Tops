#include<stdio.h>
main()
{
	int n,rem,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("The sum of digits is:%d",sum);
}
