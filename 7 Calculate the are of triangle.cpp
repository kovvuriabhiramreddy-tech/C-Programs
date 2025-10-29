#include<stdio.h>
main()
{
	int area,base,height;
	printf("enter height of triangle");
	scanf("%d",&height);
	printf("enter base of triangle");
	scanf("%d",&base);
	area=0.5*height*base;
	printf("area of triangle is %d ",area);
}
