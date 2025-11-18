#include <stdio.h>

int main() {
    int n, i, flag = 0;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime");
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
/*
Prime

Program Description
Write a Program to check the given number is Prime or Not?

Input Format
A single line input containing one integer N.

Output Format
Print the output according to the discription.

Constraints
1<=N<=104


Input-1
5


Output-1
Prime


Input-2
6


Output-2
Not Prime
*/
