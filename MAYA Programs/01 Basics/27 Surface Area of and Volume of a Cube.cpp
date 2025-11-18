#include <stdio.h>

int main() {
    int side, surfaceArea, volume;
    scanf("%d", &side);
    surfaceArea = 6 * (side * side);
    volume = side * side * side;
    printf("Surface area = %d and Volume = %d", surfaceArea, volume);
    return 0;
}
/*
Surface Area and Volume of a Cube

Program Description
Given an integer value side of a Cube, Calculate the Surface Area and Volume of the cube.

Input Format
A single line of input, contains an integer side.

Output Format
Print the Surface Area and Volume of Cube.

Constraints
1<=side<=1000

Input-1
34

Output-1
Surface area = 6936 and Volume = 39304

Input-2
77 

Output-2
Surface area = 35574 and Volume = 456533
*/
