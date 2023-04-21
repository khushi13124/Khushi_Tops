#include<stdio.h>
main()
{
	int year;
	printf("Enter year to check for leap year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Year %d is leap year",year);
	}
	else
	{
		printf("Year %d is not a leap year",year);
	}
}
