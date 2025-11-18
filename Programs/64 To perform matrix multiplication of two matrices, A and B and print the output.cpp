#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],null[100][100],i,j,r1,c1,r2,c2,k;
	printf("\n enter row and colum sizes: ");
    scanf("%d %d%d %d",&r1,&c1,&r2,&c2);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\n enter value at a[%d][%d] for matrix A: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\n enter value at b[%d][%d] for matrix 2: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    if(c1!=r2)
    {
    	printf("\nMatrix multiplicationn not possible");
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				null[i][j]=0;
				for(k=0;k<c1;k++)
				{
					null[i][j]=null[i][j]+a[i][j]+b[i][j];
				}
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\t%d",null[i][j]);	
		}
		printf("\n");
	}
    return 0;
}

