# include <stdio.h>
int main()
{
	int a[100],n,i,j,found=0;
	printf("\n enter array size:");
	scanf("%d",& n);
	for(i=0;i<n;i++)
	{
		printf("\n enter value at a[%d]position: ",i);
		scanf("%d",& a[i]);
	}
	printf("\n duplicate values are ");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]==a[j])
			{
				printf("\t %d", a[i]);
				found=1;
				break;
			}
		}
	}
	if(found==0)
	{ 
		printf("\n no duplicate value");
	}
	return 0;
}
