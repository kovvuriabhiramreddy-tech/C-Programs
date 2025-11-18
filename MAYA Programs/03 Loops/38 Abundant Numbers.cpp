#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    
    if (sum > n)
        printf("True");
    else
        printf("False");
    
    return 0;
}
/*
Abundant Numbers

Program Description
Write A Program to check a given number is Abundant Number or Not .
Abundant Number : A number is abundant, if sum of the proper factors of the number is greater than the number.
The first few abundant numbers are: 12, 18, 20, 24,..

Input Format
A single line input contains an integer N.

Output Format
Display True if give integer N is Abundant other wise display False.

Constraints
1<=N<=104


Explaination
Factors of 12 = 1 + 2 + 3 + 4 + 6 = 16
16 > 12
12 is Abundant Number


Input-1
12


Output-1
True


Input-2
13


Output-2
False
*/
