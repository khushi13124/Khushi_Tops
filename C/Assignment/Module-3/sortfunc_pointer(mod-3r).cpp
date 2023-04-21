#include<stdio.h>
void sort();
main()
{
	sort();
}
void sort()
{
	int a[5],x;
	int *ptr;
	for(int i=0;i<5;i++)
	{
		printf("Enter element:");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	printf("Sorted Array:");
	for(int i=0;i<5;i++)
	{
		ptr=&a[i];
		printf("%d ",*ptr);
	}
}
