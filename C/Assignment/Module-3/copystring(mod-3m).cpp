#include<stdio.h>
#include<string.h>
void copy(char str[])
{
	char str1[10];
	strcpy(str1,str);
	printf("Copied string is:%s",str1);
}
main()
{
	char str[10];
	printf("Enter string:");
	scanf("%s",&str);
	printf("Original string is:%s\n",str);
	copy(str);
}


