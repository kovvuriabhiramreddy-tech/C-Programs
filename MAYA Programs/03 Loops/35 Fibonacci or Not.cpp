#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("True");
        return 0;
    }

    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }

    if (b == n)
        printf("True");
    else
        printf("False");

    return 0;
}
/*
Fibonacci or Not

Program Description
Find weather the given number is present in Fibnacci series or not.
The Fibonacci sequence specifies a series of numbers where the next number is found by adding up the two numbers just before it.

Input Format
A single line input contains an integer N.

Output Format
Print the output according to the discription.

Constraints
1<=N<=104


Explaination
Fibnacci series : 0,1,1,2,3,5
0+1=1 --> 1+1=2 --> 1+2=3 --> 2+3=5


Input-1
5


Output-1
True


Input-2
10


Output-2
False
*/
