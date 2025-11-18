#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, digits = 0;
    int sum = 0;
    
    scanf("%d", &n);
    temp = n;
    
    // Count digits
    int t = n;
    while (t > 0) {
        digits++;
        t /= 10;
    }
    
    // Calculate Disarium sum
    t = n;
    while (t > 0) {
        rem = t % 10;
        sum += pow(rem, digits);
        digits--;
        t /= 10;
    }
    
    if (sum == n)
        printf("True");
    else
        printf("False");
    
    return 0;
}
/*
Disarium number

Program Description
Write a logic to print weather the given number is Disarium number or Not?
Disarium: A number is said to be the Disarium number when the sum of its digit raised to the power of their respective positions becomes equal to the number itself.

Input Format
A single line input contains an integer N.

Output Format
Display True if the Number is Disarium Number else display False if Not Disarium Number.

Constraints
1<=N<=104


Explaination
The Given number is 175 is a Disarium number as follows:
1**1+ 7**2 + 5**3 = 1+ 49 + 125 = 175


Input-1
175


Output-1
True


Input-2
346


Output-2
False
*/
