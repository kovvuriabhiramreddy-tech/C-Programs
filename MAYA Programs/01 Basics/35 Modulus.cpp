#include <stdio.h>

int main() {
    int num1, num2, mod;
    scanf("%d %d", &num1, &num2);
    mod = num1 % num2;
    printf("%d", mod);
    return 0;
}
/*
Modulus

Program Description
Take two numbers num1 and num2 as input from stdin and you need to find modulus of them.

Input Format
Two different lines of input contains two integers num1 and num2

Output Format
You need to print the modulus of num1 and num2

Constraints
1<=num1,num2<=10000

Input-1
102
60

Output-1
42

Input-2
5 10

Output-2
5
*/
