#include<stdio.h>
int main()
{
	int n,count,i,j;
	printf("enter n value: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
		     printf("\n %d is a Prime number",i);	
		}
		else
		{
			printf("\n %d is Not a Prime Number",i);
		}
	}
	
}
