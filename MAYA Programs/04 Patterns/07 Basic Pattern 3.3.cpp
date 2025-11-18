#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
/*
Basic Pattern 3.3

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
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1

Input-2
5

Output-2
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1 

Input-3
5

Output-3
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1  
*/
