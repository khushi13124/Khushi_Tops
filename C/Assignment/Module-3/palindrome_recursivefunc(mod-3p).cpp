#include<stdio.h>
int palindrome(int n)
{
	int num=0,rem=0;
	while(n!=0)
	{
		rem=n%10;
		num=rem+num*10;
		n=n/10;
		palindrome(n);
	}
	return num;
}
main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int num=palindrome(n);
	if(n==num)
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
}
