#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        printf("%d ", 2 * i);
    }
    return 0;
}
/*
First N Even Natural Numbers

Program Description
Write a C program to print First N even Natural Numbers.

Input Format
A single line input contains one integer N.

Output Format
Print the output according to the discription.

Constraints
1<=N<=104


Input-1
5


Output-1
10 8 6 4 2  


Input-2
15


Output-2
30 28 26 24 22 20 18 16 14 12 10 8 6 4 2
*/
