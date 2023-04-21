#include<stdio.h>
main()
{
	int num=1;
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",num);
			num+=1;	
		}
		printf("\n");
	}
}
