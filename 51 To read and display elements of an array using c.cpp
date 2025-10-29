#include<stdio.h>
int main()
{
	int roll[1000],n,i;
	printf("\n enter array size:  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter element at roll [%d] position",i);
		scanf("%d",&roll[i]);
	}
	printf("\n array elements are");
	for(i=0;i<n;i++)
	{
		printf("\t %d",roll[i]);
	}
	return 0;
}
