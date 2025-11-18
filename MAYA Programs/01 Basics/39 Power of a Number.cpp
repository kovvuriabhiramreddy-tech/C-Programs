#include <stdio.h>
#include <math.h>

int main() {
    int x, y, M;
    long long result;
    scanf("%d %d %d", &x, &y, &M);
    result = (long long)pow(x, y);
    printf("%lld", result % M);
    return 0;
}
/*
Power of a Number

Program Description
Python.math module provides access to the mathematical functions defined by the C standard.

One of the widely used function is math.pow(x, y) which Returns x raised to the power y.
Now, you are given three integers x, y and M. You have to print ( x ^ y ) Mod M. 

Input Format
First line will contain three integers x, y, and M.

Output Format
Print an Integer denoting answer of the calculation (x ^ y ) Mod M.

Constraints
1 <= X <= 20
1 <= Y <= 100
2 <= M <= 100

Explaination
Input 1:
10 power 2 = 100
100 % 3 = 1

Input-1
10 2 3

Output-1
1 

Input-2
2 10 5

Output-2
4
*/
