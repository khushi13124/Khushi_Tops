#include<stdio.h>
main()
{
	int inp[10],big=0,n,a,b;
	for(int i=0;i<10;i++)
	{
		printf("Enter your number:");
		scanf("%d",&inp[i]);
	}
	printf("Array is:");
	for(int i=0;i<10;i++)
	{
		printf("%d ",inp[i]);
	}
	for(int i=0;i<10;i++)
	{
		a=inp[i];
		b=inp[i+1];
		if(a>b)
		{
			if(a>big)
			{
				big=a;
			}
		}
		else
		{
			if(b>big)
			{
				big=b;
			}
		}
	}
	printf("Largest number from the array is:%d",big);
}
