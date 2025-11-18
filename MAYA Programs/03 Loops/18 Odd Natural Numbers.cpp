#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    
    return 0;
}
/*
Odd Natural Numbers

Program Description
Write a program to Print Odd Natural Numbers (starting from 1) that are <=N.

Input Format
A single line input containing one integer N.

Output Format
Dsplay output according to the discription.

Constraints
1<=N<=104


Input-1
10


Output-1
1 3 5 7 9


Input-2
20


Output-2
1 3 5 7 9 11 13 17 19
*/
