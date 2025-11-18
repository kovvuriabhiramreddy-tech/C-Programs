#include <stdio.h>

int main() {
    int n;
    long long fact = 1;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    printf("%lld", fact);
    return 0;
}
/*
Factorial of a Given Number

Program Description
Write a program to Factorial of a given Number.

Input Format
A single line input contains an integer N.

Output Format
Print the output according to the discription.

Constraints
1<=N<=104


Input-1
6


Output-1
720   


Input-2
5


Output-2
120
*/
