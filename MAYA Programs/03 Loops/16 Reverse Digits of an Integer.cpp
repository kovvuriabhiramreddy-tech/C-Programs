#include <stdio.h>

int main() {
    int n, rev = 0;
    scanf("%d", &n);
    
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    
    printf("%d", rev);
    return 0;
}
/*
Reverse Digits of an Integer

Program Description
Write a Program to find the reverse digits of an integer.

Input Format
A single line input containing one integer N.

Output Format
Printt he output according to the discription.

Constraints
1<=N<=104


Input-1
123


Output-1
321


Input-2
1234


Output-2
4321
*/
