#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    while (n != 0) {
        n = n / 10;
        count++;
    }
    
    printf("%d", count);
    return 0;
}
/*
Find the Digits Count

Program Description
Write a Program to find total digits in a given number.

Input Format
A single line contains an integer N.

Output Format
Display the total digits count in a given number.

Constraints
1

Input-1
123


Output-1
3


Input-2
1234


Output-2
4
*/
