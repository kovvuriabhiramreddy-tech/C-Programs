#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int value = (i % 2 == 0) ? 1 : 0; // Even rows = 1, Odd rows = 0
        for (int j = 1; j <= n; j++) {
            printf("%d ", value);
        }
        printf("\n");
    }
    
    return 0;
}
/*
Basic Pattern 4.1

Program Description
You will be given a number N.
Print the following Pattern.

Input Format
Only line of input contains an integer N.

Output Format
Print appropriate pattern.

Constraints
1<=N<=25


Input-1
7

Output-1
0 0 0 0 0 0 0
1 1 1 1 1 1 1
0 0 0 0 0 0 0
1 1 1 1 1 1 1
0 0 0 0 0 0 0
1 1 1 1 1 1 1
0 0 0 0 0 0 0

Input-2

Output-2
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0  

Input-3
5

Output-3
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
*/
