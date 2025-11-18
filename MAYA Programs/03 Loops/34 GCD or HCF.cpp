#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("%d", a);
    return 0;
}
/*
GCD or HCF

Program Description
Find the GCD of given two numbers.
GCD: Highest Common Factor or Greatest Common Divisor of two or more integers, when at least one of them is not zero is the largest positive integer that evenly divides the numbers without a remainder.
Example: The GCD of 8 and 12 is 4.

Input Format
A single line contains two integers are N and M.

Output Format
Display the GCD of given two integers.

Constraints
1<=M,N<=104


Explaination
We have two integers 8 and 12. Let's find the HCF.

The divisors of 8 are:
8-> 1, 2, 4, 8

The divisors of 12 are:
12-> 1, 2, 3, 4, 6, 12

HCF /GCD is the greatest common divisor. So HCF of 8 and 12 are 4.


Input-1
8 12


Output-1
4


Input-2
12 24


Output-2
12
*/
