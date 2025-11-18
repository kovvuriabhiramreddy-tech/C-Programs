#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", 3 * i);
    }
    
    return 0;
}
/*
First N Multiples of 3

Program Description
Write a program to print first N multiples of 3.

Input Format
A single line input contains an integer N.

Output Format
Display the output according to the discription.

Constraints
1<=N<=104


Input-1
5


Output-1
3 6 9 12 15   
*/
