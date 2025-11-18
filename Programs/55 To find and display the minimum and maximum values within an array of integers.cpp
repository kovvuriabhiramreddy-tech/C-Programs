#include <stdio.h>
int main()
{
    int a[1000],n,i,min,max;
    printf("Enter array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value at a[%d] position: ",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nMin value = %d",min);
    printf("\nMax value = %d",max);
	return 	0;
}
