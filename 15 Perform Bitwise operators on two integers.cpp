#include<stdio.h>
main()
{
	int a,b;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	printf("\n and operator (&) %d",a&b);
	printf("\n or operator (|) %d",a|b);
	printf("\n xor operator (^) %d",a^b);
	printf("\n left shift is : %d",a<<b);
	printf("\n right shift is: (&) %d",a>>b);
	printf("\n approx is : %d",~a);
}
