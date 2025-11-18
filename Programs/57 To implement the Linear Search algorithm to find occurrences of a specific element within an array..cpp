/*Linear Search also called as a sequencial search*/

#include<stdio.h>
int main()
{
	int a[1000],n,i,search_element,found=0;
	printf("enter array size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value at a[%d] position: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter searching element: ");
	scanf("%d",&search_element);
	for(i=0;i<n;i++)
	{
		if(search_element==a[i])
		{
			printf("\nSearching Element Found at %d",i);
			found=found+1;
		}
	}
	if(found==0)
	{
		printf("\nSearching Element is not found");
	}
	return 0;
	
}
