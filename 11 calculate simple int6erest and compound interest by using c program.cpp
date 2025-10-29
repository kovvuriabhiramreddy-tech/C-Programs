#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,si,co,n;
	printf("enter principal amount ");
	scanf("%f",&p);
	printf("enter time in years ");
	scanf("%f",&t);
	printf("enter rate of interest in rupees ");
	scanf("%f",&r);
	si=(p*t*r*12)/100;
    co=p*(pow(1+r/100,t)-1);
    printf("Simple Interest = %0.3f\n",si);
    printf("Compound Interest = %0.3f", co);
}



