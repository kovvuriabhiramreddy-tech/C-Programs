#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
/*
Basic Pattern 2.1

Program Description
You will be given a number N.
Print the following Pattern.

Input Format
Only line of input contains an integer N.

Output Format
Print appropriate pattern.

Constraints
1<=N<=10

Input-1
10

Output-1
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * * * *

Input-2
5

Output-2
*
* *
* * *
* * * *
* * * * * 

Input-3
5

Output-3
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
*/
