#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],sum[100][100],r,c,i,j;
	printf("\nEnter row and column sizes For matries: ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter value at a[%d][%d] position For Matrix A : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter value at a[%d][%d] positionFor Matrix B : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nSum of Matrix A and Matrix B is\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
