#include<stdio.h>
int main()
{
	int n;
	printf("Enter n Value: ");
	scanf("%d",&n);
	if(n>9)
	{
		printf("Greater than 9");
	}
	else
	{
		if(n==1) printf("One");
		else if(n==1) printf("One");
		else if(n==2)printf("Two");
		else if(n==3)printf("Three");
		else if(n==4)printf("Four");
		else if(n==5)printf("Five");
		else if(n==6)printf("Six");
		else if(n==7)printf("Seven");
		else if(n==8)printf("Eight");
		else if(n==9)printf("Nine");
	}
	return 0;
}
