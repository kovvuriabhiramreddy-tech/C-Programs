#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }

    return 0;
}
/*
Find Factors

Program Description
Write a Program to find the Factors of given number.

Input Format
A single line contains an integer N.

Output Format
Display all Factors of given number.

Constraints
1=N=1000


Input-1
10


Output-1
1 2 5 10  


Input-2
12


Output-2
1 2 3 4 5 6 12
*/
