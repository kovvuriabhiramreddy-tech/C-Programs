#include <stdio.h>

int main() {
    int n, first, last;
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
        n = n / 10;
    first = n;

    printf("%d", first + last);
    return 0;
}
/*
Sum of First and Last Digits

Program Description
Write a program to find the Sum of First and Last Digits of a given numbers.

Input Format
A single line contains an integer N.

Output Format
Display the Result of Sum of First and Last digits

Constraints
1=N=1000


Input-1
123


Output-1
4  


Input-2
1234 


Output-2
5
*/
