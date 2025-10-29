#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	for(int n=a;n<=b;n++)
	{
		if(n<10)
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
	else
	    {
	    if(n%2==0)
		printf("even");
		else
		printf("odd");
	    }
	printf("\n");
    } 
	return 0;
}
