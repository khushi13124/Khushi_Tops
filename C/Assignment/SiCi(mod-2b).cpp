#include<stdio.h>
#include<math.h>
main()
{
	int t;
	float p,r,si,ci1,ci;
	printf("Enter Your principle amount:\n");
	scanf("%f",&p);
	printf("Enter your rate of interest:\n");
	scanf("%f",&r);
	printf("Enter your time period:\n");
	scanf("%d",&t);
	si=(p*r*t)/100;
	ci1=p*(pow(1+(r/100),t));
	ci=ci1-p;
	printf("Your simple interest: %0.2f\nYour compound interest:%0.2f\n",si,ci);
}
