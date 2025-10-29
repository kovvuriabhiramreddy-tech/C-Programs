#include<stdio.h>
main()
{
	float farenheit,clecius;
	printf("enter temperature in farenheit ");
	scanf("%f",&farenheit);
	clecius=(farenheit-32)*5/9;
	printf("\n temperature in celcius is %2f C",clecius);
}


