#include <stdio.h>

int main() {
    int n, r, rev = 0, t;
    scanf("%d", &n);
    t = n;
    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (t == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
/*
Palindrome

Program Description
Write a Program to check the given number is Palindrome or Not using User - defined function.
Note:Palindrome means the given number is equal to revers of the given number.

Input Format
A single line input contains one integer N.

Output Format
Display the output according to the discription.

Constraints
1<=N<=103


Input-1
121


Output-1
Palindrome


Input-2
123


Output-2
Not Palindrome
*/
