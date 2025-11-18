#include <stdio.h>

int main() {
    double base1, base2, height, area;
    scanf("%lf %lf %lf", &base1, &base2, &height);
    area = 0.5 * (base1 + base2) * height;
    printf("%.4lf", area);
    return 0;
}
/*
Area of Trapezium

Program Description
Given the base1, base2, and height of Trapezium.Calculate the area of Trapezium.
Note: Adjust the area upto four decimal points.

Input Format
Three different lines of input contains integers base1,base2 and height

Output Format
Print the area of Trapezium upto 4 decimal places

Constraints
1<=base1,base2,height<=100 base1

Input-1
2
3
4

Output-1
10.0000

Input-2
1
2
3

Output-2
4.5000
*/
