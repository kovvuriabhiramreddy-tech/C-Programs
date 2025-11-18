#include <stdio.h>

int main() {
    int n, square, sum = 0;
    scanf("%d", &n);
    
    square = n * n;
    
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    
    if (sum == n)
        printf("Neon Number");
    else
        printf("Not Neon Number");
    
    return 0;
}
/*
Neon Number
Program Description

Write a program to check given number is Neon Number or not and display messages Neon Number or Not Neon Number.
A neon number is a number where the sum of digits of square of the number is equal to the igven number. The task is to check and print neon numbers in a range.

Input Format
A single line contains an integer N.

Output Format
Display the given number is Neon number or Not Neon Number.

Constraints
1<=N<=104


Explaination
Input 1:
Square is 9*9 = 81 and sum of the digits of the square is 9.

Input 2:
Square is 12*12 = 144 and sum of the digits of the square is 9 (1 + 4 + 4) which is not equal to 12.


Input-1
9


Output-1
Neon Number 


Input-2
12


Output-2
Not Neon Number
*/
