#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int index_value, new_value, i, n = 5;
	printf("\nOriginal Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
	printf("\nSelect one index position from (0 to 4): ");
    scanf("%d", &index_value);
	if(index_value < 0 || index_value >= n)
    {
        printf("Invalid index. Please run the program again.\n");
        return 1;
    }
	 printf("Enter new value: ");
    scanf("%d", &new_value);
	a[index_value] = new_value;
	printf("Array after replacement: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
	return 0;
}
