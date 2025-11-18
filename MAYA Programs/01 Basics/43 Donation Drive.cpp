#include <stdio.h>

int main() {
    int N, X, remaining;
    scanf("%d %d", &N, &X);
    remaining = N - X;
    printf("%d", remaining);
    return 0;
}
/*
Donation Drive

Program Description
A blood drive aims to collect N number of blood donations.
The drive has collected X donations so far. Find the remaining number of donations needed to reach the target.

Input Format
A single line of input contains two space-separated integers N and X — the number of required donations and the number of collected donations, respectively.

Output Format
Output on a new line, the remaining number of donations needed to reach the target.

Constraints
1<=X<=N<=20

Input-1
5 2

Output-1
3

Input-2
3 3

Output-2
0
*/
