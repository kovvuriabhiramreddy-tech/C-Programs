#include<stdio.h>
main()
{
	float farenheit,clecius;
	printf("enter temperature in celcius ");
	scanf("%f",&clecius);
	farenheit=(clecius*1.8)+32;
	printf("\n temperature in farenheit is %2f F",farenheit);
}
