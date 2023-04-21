#include<stdio.h>
main()
{
	int ans;
	float Area,b,h,l,r,pi=3.14;
	printf("1.Area of triangle\n2.Area of Rectangle\n3.Area of circle\nEnter number to perform respective function");
	scanf("%d",&ans);
	switch(ans)
	{
		case 1:
			printf("Enter the base and height of the triangle:");
			scanf("%f %f",&b,&h);
			Area=0.5*b*h;
			printf("Area of triangle is %0.2f",Area);
			break;
		case 2:
			printf("Enter the length and breadth of the rectangle:");
			scanf("%f %f",&l,&b);
			Area=l*b;
			printf("Area of rectangle is %0.2f",Area);
			break;
		case 3:
			printf("Enter the radius of the circle:");
			scanf("%f",&r);
			Area=pi*r*r;
			printf("Area of circle is %0.2f",Area);
			break;
		default:
			printf("incorrect input");
			break;
	}
}
