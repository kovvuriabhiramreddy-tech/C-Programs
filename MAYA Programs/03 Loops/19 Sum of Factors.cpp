#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    
    printf("%d", sum);
    return 0;
}
/*
Sum of Factors

Program Description
Write a program to find the sum of factors of a given number (excluding the number itself).

Input Format
A single line input containing one integer N.

Output Format
Print output according to the discription.

Constraints
1<=N<=10^4


Input-1
14


Output-1
10


Input-2
20


Output-2
22
*/
