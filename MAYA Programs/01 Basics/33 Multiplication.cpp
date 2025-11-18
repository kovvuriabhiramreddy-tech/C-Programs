#include <stdio.h>

int main() {
    int num1, num2, product;
    scanf("%d %d", &num1, &num2);
    product = num1 * num2;
    printf("%d", product);
    return 0;
}
/*
Multiplication

Program Description
Take two numbers num1 and num2 as input and you need to multiply them.

Input Format
Two different lines of input contains num1 and num2

Output Format
Calculate the multiplication of num1 and num2 and print the result

Constraints
1 <= num1,num2 <= 10000

Input-1
5 20

Output-1
100

Input-2
17 17

Output-2
289

Input-3
10000 65

Output-3
650000

Input-4
16 10

Output-4
160
*/
