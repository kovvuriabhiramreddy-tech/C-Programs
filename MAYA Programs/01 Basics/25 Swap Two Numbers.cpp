#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d%d", a, b);
    return 0;
}
/*
Swap Two Numbers

Program Description
Given two integers "a" and "b" and we have to swap their values without using any temporary variable.

Input Format
A single line input contains two space separated integers a and b

Output Format
Print the values a and b after swap

Constraints
-1000<=a,b<=1000

Input-1
10
20

Output-1
20
10

Input-2
-100
-200

Output-2
-200
-100
*/
