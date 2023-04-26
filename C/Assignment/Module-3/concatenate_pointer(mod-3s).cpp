#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[10],x[30];
	char *ptr;
	printf("Enter string 1:");
	scanf("%s",&s1);
	printf("Enter string 2:");
	scanf("%s",&s2);
	ptr=strcat(s1,s2);
	printf("New:%s",ptr);
}
