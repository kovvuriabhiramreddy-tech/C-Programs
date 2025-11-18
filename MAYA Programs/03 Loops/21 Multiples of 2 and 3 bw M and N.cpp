#include <stdio.h>

int main() {
    int m, n, count = 0;
    scanf("%d %d", &m, &n);
    
    for (int i = m; i <= n; i++) {
        if (i % 2 == 0 && i % 3 == 0)
            count++;
    }
    
    printf("%d", count);
    return 0;
}
/*
Multiples of 2 and 3 b/w M and N

Program Description
Write a program to find the count of numbers between M and N which is divisible by both 2 and 3.

Input Format
A single line input containing two space-separated integers are M,N.

Output Format
Print the output according to the discription.

Constraints
1<=N,M<=104


Input-1
20 40


Output-1
3


Input-2
1 10


Output-2
1
*/
