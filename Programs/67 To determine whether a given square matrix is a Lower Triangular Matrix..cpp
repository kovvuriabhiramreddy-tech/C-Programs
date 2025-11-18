#include <stdio.h>
int main() 
{
    int a[100][100],i,j,n;
	printf("Enter Array Size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter values at a[%d][%d] in the position: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int lower =1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>i&&a[i][j]!=0||j<=i&&a[i][j]==0)
			{
				lower=0;
				break;
			}
		}
	}
	if(lower==1)
	{
		printf("\nGiven matrix is Lower Triangular Matrix");
	}
	else
	{
		printf("\nGiven matrix is not a Lower Triangular Matrix");
	}
    return 0;
}
