#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
    
    return 0;
}
/*
Basic Pattern 4.3

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
9

Output-1
1 0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1

Input-2
5

Output-2
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1 

Input-3
5

Output-3
1 0 1 0 1 0 1
1 0 1 0 1 0 1
1 0 1 0 1 0 1
1 0 1 0 1 0 1
1 0 1 0 1 0 1
1 0 1 0 1 0 1
1 0 1 0 1 0 1  
*/
