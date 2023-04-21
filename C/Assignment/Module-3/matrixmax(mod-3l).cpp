#include<stdio.h>
main()
{
	int a[3][3],big=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter element %d%d:",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]>big)
			{
				big=a[i][j];
			}
		}
	}
	printf("Maximum value from the matrix is:%d",big);
}
