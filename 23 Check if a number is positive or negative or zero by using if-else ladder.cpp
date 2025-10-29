#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Number is Positive\n");
    }
    else if (num < 0)
    {
        printf("Number is Negative\n");
    }
    else if (num == 0)
    {
        printf("Number is zero\n");
    }
    return 0;

}
