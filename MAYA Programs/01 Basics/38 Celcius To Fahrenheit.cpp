#include <stdio.h>

int main() {
    double C, F;
    scanf("%lf", &C);
    F = (C * 9 / 5) + 32;
    printf("%.2lf", F);
    return 0;
}
/*
Celsius To Fahrenheit

Program Description
Given Celsius value , convert it into Fahrenheit values.

Input Format
A single line input contains an integer C.

Output Format
Fahrenheit values ( Print upto two decimal values )

Constraints
1<=C<=1000000

Input-1
22

Output-1
71.60

Input-2
12

Output-2
53.60
*/
