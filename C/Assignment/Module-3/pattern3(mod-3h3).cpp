#include<stdio.h>
main()
{
	for(int i=4;i>=1;i--)  //no. of rows
	{
		for(int j=4;j>i;j--)  //spaces
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)  //stars
		{
			printf("*");
		}	
		printf("\n");
	}
}
/*Logic:
1)i=4,i>=1:YES
loop-1:
j=4;j>i:NO
break-decrement is done so if j=4!>i j=3 will never be greater than i;
(j=3;j>i:NO
j=2;j>i:NO
j=1;j>i:NO)
loop-2:
k=1,k<=i:YES
k=2,k<=i:YES
k=3,k<=i:YES
k=4,k<=i:YES
k=5,k<=i:NO
print: ****
2)i=3,i>=1:YES
loop-1:
j=4;j>i:YES (" ")
j=3;j>i:NO
j=2;j>i:NO
j=1;j>i:NO
loop-2:
k=1,k<=i:YES
k=2,k<=i:YES
k=3,k<=i:YES
k=4,k<=i:NO
break;
print: ***
3)i=2,i>=1:YES
loop-1:
j=4;j>i:YES   (" ")
j=3;j>i:YES   ("  ")
j=2;j>i:NO
j=1;j>i:NO
loop-2:
k=1,k<=i:YES
k=2,k<=i:YES
k=3,k<=i:NO
break;
print:  **
4)i=1,i>=1:YES
loop-1:
j=4;j>i:YES (" ")
j=3;j>i:YES ("  ")
j=2;j>i:YES ("   ")
j=1;j>i:NO
loop-2:
k=1,k<=i:YES
k=2,k<=i:NO
break;
print:   *
OUTPUT:
****
 ***
  **
   *
*/



