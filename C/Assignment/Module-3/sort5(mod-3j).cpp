#include<stdio.h>
main()
{
	int inp[5],a;
	for(int i=0;i<5;i++)                     //take value
	{
		printf("Enter your number:");
		scanf("%d",&inp[i]);
	}
	printf("Original array is:");            //print initial array
	for(int i=0;i<5;i++)
	{
		printf("%d ",inp[i]);
	}
	for(int i=0;i<5;i++)                    //sorting
	{
		for(int j=i+1;j<5;j++)
		{
			if(inp[j]>inp[i])                           
			{
				a=inp[i];                          //initialize
				inp[i]=inp[j];                     //assign 
				//printf("i=%d j=%d\n",i,j);       
				//for(int i=0;i<5;i++)
				//{
				//	printf("%d ",inp[i]);
				//}
				inp[j]=a;      //i which had smaller value is now given to j
				//printf("\n");
				//for(int i=0;i<5;i++)
				//{
				//	printf("%d ",inp[i]);
				//}
			}
		}
	}
	printf("\nThe sorted array is:");        //print sorted array
	for(int i=0;i<5;i++)
	{
		printf("%d ",inp[i]);
	}
}
