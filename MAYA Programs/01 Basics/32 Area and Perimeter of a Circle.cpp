#include <stdio.h>

int main() {
    float radius, area, perimeter;
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    printf("%.2f%.2f", area, perimeter);
    return 0;
}
/*
Area and Perimeter of Circle

Program Description
Given an integer radius of the circle. Find the area and perimeter of circle.
Note: 
1. Adjust the output to 2 decimal places after point.
2. Take the value of 'pi' as 3.14
          
Input Format
A single line contains an integer Radius

Output Format
Print the Area and Perimeter of circle with 2 decimal places after the point

Constraints
1<=Radius<=1000

Input-1
5

Output-1
78.50
31.40

Input-2
9

Output-2
254.34
56.52
*/
