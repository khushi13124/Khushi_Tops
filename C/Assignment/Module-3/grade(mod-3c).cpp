#include<stdio.h>
main()
{
	int mks;
	printf("Enter marks out of 100 to know your grade:");
	scanf("%d",&mks);
	if(mks>=0 && mks<=35)
	{
		printf("Fail");
	}
	else if(mks>35 && mks<=50)
	{
		printf("Pass class");
	}
	else if(mks>50 && mks<=60)
	{
		printf("Second class");
	}
	else if(mks>60 && mks<=75)
	
	{
		printf("First class");
	}
	else if(mks>75 && mks<=100)
	{
		printf("Passed with Distinction");
	}
	else
	{
		printf("Invalid marks entered");
	}
}           //why does it say fail even when i enter symbols like +-*/...(Because of ascii values of the operators)
