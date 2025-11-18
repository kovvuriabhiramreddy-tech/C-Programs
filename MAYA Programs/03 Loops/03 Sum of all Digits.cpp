#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    
    printf("%d", sum);
    return 0;
}
/*
Sum of all Digits

Program Description
Write a Program to Find the sum of all the digits in the Given Number.

Input Format
A single line contains an integer N.

Output Format
Display the given integer digits sum

Constraints
1=N=1000


Input-1
123


Output-1
6


Input-2
1234


Output-2
10
*/
