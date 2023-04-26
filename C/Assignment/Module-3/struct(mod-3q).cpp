#include<stdio.h>
struct emp{
	char empname[5][20],empadd[5][25];
	int empage[5];
}e1;
main()
{
	for(int i=1;i<=5;i++)
	{
		printf("Enter name:");
		scanf("%s",&e1.empname[i]);
		printf("Enter age:");
		scanf("%d",&e1.empage[i]);
		printf("Enter address:");
		scanf("%s",&e1.empadd[i]);
	}
	printf("Emp no.\t\tEmpname\t\tEmpage\t\tEmpadd\n");
	for(int i=1;i<=5;i++)
	{
		printf("%d\t",i);
		printf("%s\t\t %d\t\t  %s\n",e1.empname[i],e1.empage[i],e1.empadd[i]);
	}
}
