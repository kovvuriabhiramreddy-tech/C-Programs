#include <stdio.h>

int main() {
    int N, sum;
    scanf("%d", &N);
    sum = N * (N + 1) / 2;
    printf("%d", sum);
    return 0;
}
/*
Sum of First N Natural Numbers

Program Description
Given an integer number N.Find out Sum of first N natural numbers.

Input Format
A single line input contains an integer N

Output Format
Display the sum of first N natural numbers

Constraints
1<=N<=100

Explaination
Test Case 1:
If N = 5,
then the sum of first N natural numbers are 1 2 3 4 5 and their sum is 1 + 2 + 3 + 4 + 5 = 15

Input-1
5

Output-1
15

Input-2
100

Output-2
5050
*/
