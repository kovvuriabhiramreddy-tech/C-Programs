#include <stdio.h>

int main() {
    int A, B, result;
    scanf("%d %d", &A, &B);
    result = A + B;
    printf("%d1", result);
    return 0;
}
/*
Off By One

Program Description
You just bought a new calculator, but it seems to have a small problem: all its results have an extra 1 appended to the end.
For example, if you ask it for 3 + 5, it'll print 81, and 4 + 12 will result in 161.
Given A and B, can you predict what the calculator will print when you ask it for A+B?

Input Format
A single line of input contains two space-separated integers A and B

Output Format
Print a single integer: the calculator's output when you enter A+B into it.

Constraints
1<=A,B<=50

Input-1
3 5


Output-1
81
Input-2
4 12

Output-2
161
*/
