#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a = 0, b = 1, next;
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    
    return 0;
}
/*
Fibonacci

Program Description
Write A program to print fibonacci up to given range.

Input Format
A single line input contains an integer N.

Output Format
Display all the fibonacci series up to given range.

Constraints
1<=N<=105


Explaination
The Given Input is : 10-->0 1 1 2 3 5 8 13 21 34-->first 10 fibonacci series


Input-1
10


Output-1
0 1 1 2 3 5 8 13 21 34 


Input-2
15


Output-2
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
*/
