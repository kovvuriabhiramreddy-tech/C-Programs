#include <stdio.h>

int main() {
    int base, height, area;
    scanf("%d %d", &base, &height);
    area = (base * height) / 2;
    printf("%d", area);
    return 0;
}
/*
Area of a Triangle

Program Description
Given the base and height of the triangle.Calculate the area of the triangle.

Input Format
A single line input contains two space separated integers Base and Height

Output Format
Print the Area of Triangle

Constraints
1<=base,height<=100

Input-1
10
26

Output-1
130

Input-2
2
4

Output-2
4
*/
