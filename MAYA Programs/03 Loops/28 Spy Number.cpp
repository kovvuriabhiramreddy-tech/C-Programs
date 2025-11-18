#include <stdio.h>

int main() {
    int n, digit, sum = 0, product = 1;
    scanf("%d", &n);
    
    int temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }
    
    if (sum == product)
        printf("Spy Number");
    else
        printf("Not Spy Number");
    
    return 0;
}
/*
Spy Number

Program Description
Write A Program to check the given number is spy number or not, and display messages Spy Number or Not Spy Number.
Spy Number-A Number is spy number, if the sum of its digits equals the product of its digits.

Input Format
A single line input contains an integer N.

Output Format
Print the output according to the discription.

Constraints
1<=N<=104


Explaination
Input 1:
Consider the number = 1124
Sum of the digits = 1 + 1 + 2 + 4
Product of the digits = 1 * 1 * 2 * 4


Input-1
1124


Output-1
Spy Number.
*/
