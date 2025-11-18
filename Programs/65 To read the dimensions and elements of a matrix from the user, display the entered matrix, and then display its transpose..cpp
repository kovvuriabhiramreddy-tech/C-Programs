#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j;
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
	printf("\nMatrix A is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of Matrix A is \n");
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
