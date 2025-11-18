#include <stdio.h>
#include <limits.h>
int main() 
{
    long long N, rev = 0, sign = 1;
    scanf("%lld", &N);
    if (N < 0) {
        sign = -1;
        N = -N;
    }
    while (N > 0) {
        rev = rev * 10 + (N % 10);
        N /= 10;
    }
    rev = rev * sign;
    if (rev > INT_MAX || rev < INT_MIN)
        printf("0");
    else
        printf("%lld", rev);
    return 0;
}
/*
Reverse Integer

Program Description
Given a 32-bit signed integer, reverse digits of an integer.
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [-231, 231 - 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

Input Format
A single line contains an integer N.

Output Format
Display the given integer as reverse integer.

Constraints
1<=N<=104


Input-1
123


Output-1
321


Input-2
1221


Output-2
1221


Input-3
-123


Output-3
-321
*/
