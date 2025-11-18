#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j,sum=0;
	printf("\nEnter row and column sizes: ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter value at a[%d][%d] position: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			sum=sum+a[i][j];
		}
	}
	printf("\nTrace of A : %d",sum);
	return 0;
}
