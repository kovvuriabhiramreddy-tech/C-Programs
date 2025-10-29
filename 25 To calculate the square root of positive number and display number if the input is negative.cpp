#include <stdio.h>
#include <math.h>

int main() 
{
    double num, root;
    printf("Enter a positive number: ");
    scanf("%lf", &num);
    if (num < 0) 
	{
        printf("Error: Please enter a non-negative number.\n");
    } 
	else 
	{
        root = sqrt(num);
        printf("The square root of %.2lf is %.2lf\n", num, root);
    }

    return 0;
}

