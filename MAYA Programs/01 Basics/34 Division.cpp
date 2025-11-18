#include <stdio.h>

int main() {
    int num1, num2, division;
    scanf("%d %d", &num1, &num2);
    division = num1 / num2;
    printf("%d", division);
    return 0;
}
/*
Division

Program Description
Take two numbers num1 and num2 as input from stdin and you need to divide them.

Input Format
Two different lines of input contains two integers num1 and num2

Output Format
You need to print the division of num1 and num2

Constraints
1<=num1,num2<=10000 num1>=num2

Input-1
102
60

Output-1
1

Input-2
100 5

Output-2
20
*/
