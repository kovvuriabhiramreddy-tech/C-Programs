#include <stdio.h>

int main() {
    int n, max = 0, digit;
    scanf("%d", &n);
    
    while (n > 0) {
        digit = n % 10;
        if (digit > max)
            max = digit;
        n = n / 10;
    }
    
    printf("%d", max);
    return 0;
}
/*
Largest Digit

Program Description
Write a Program to find Largest digit in a given number and display output as given below.

Input Format
A single line contains an integer N.

Output Format
Display the greatest individual integer in the given large integer N.

Constraints
1<=N<=105


Explaination
The given number is 9453-->the largest number -->9


Input-1
9453


Output-1
9


Input-2
12345


Output-2
5
*/
