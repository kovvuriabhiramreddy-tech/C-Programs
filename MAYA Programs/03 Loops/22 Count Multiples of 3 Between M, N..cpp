#include <stdio.h>

int main() {
    int m, n, count = 0;
    scanf("%d %d", &m, &n);
    
    for (int i = m; i <= n; i++) {
        if (i % 3 == 0)
            count++;
    }
    
    printf("%d", count);
    return 0;
}
/*
Count Multiples of 3 Between M, N.

Program Description
Write a C program to count Multiples of 3 between M ,N.

Input Format
A single line input containing two space-separated integers are M,N.

Output Format
Print the output according to the discription.

Constraints
1<=M<=N<=10^4


Input-1
1 21


Output-1
7
*/
