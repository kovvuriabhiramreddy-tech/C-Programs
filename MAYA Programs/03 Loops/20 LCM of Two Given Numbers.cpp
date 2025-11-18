#include <stdio.h>

int main() {
    int m, n, max;
    scanf("%d %d", &m, &n);
    
    max = (m > n) ? m : n;
    
    while (1) {
        if (max % m == 0 && max % n == 0) {
            printf("%d", max);
            break;
        }
        max++;
    }
    
    return 0;
}
/*
LCM of Two Given Numbers

Program Description
Write a C Program to find the LCM of two given numbers.

Input Format
A single line input contains two integers are M,N.

Output Format
Print the output according to the discription.

Constraints
1<=M,N<=104


Input-1
12 24 


Output-1
24  


Input-2
7 5


Output-2
35
*/
