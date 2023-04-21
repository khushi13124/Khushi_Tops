#include<stdio.h>
main()
{
	int inp[5],n,ch;
	printf("Enter the number of elements you want to input in array:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter your number:");
		scanf("%d",&inp[i]);
	}
	printf("Enter the position of element you want to see the value of:");
	scanf("%d",&ch);
	if(ch<=n)
	{
		printf("%d",inp[ch]);
	}
	else
	{
		printf("Choice out of order!");
	}
}
