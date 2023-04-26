#include<stdio.h>
main()
{
	int a,b,c;
	int *ptr1,*ptr2,*ptr3;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	ptr1=&a;
	ptr2=&b;
	c=*ptr1+*ptr2;
	ptr3=&c;
	printf("Sum is %d",*ptr3);
}
