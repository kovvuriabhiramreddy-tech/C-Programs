#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
/*
Basic Pattern 2.4

Program Description
You will be given a number N.
Print the following Pattern.

Input Format
Only line of input contains an integer N.

Output Format
Print appropriate pattern.

Constraints
3<=N<=25

Input-1
6

Output-1
6 
5 6 
4 5 6 
3 4 5 6 
2 3 4 5 6 
1 2 3 4 5 6

Input-2
5

Output-2
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5

Input-3
5

Output-3
7
6 7
5 6 7
4 5 6 7
3 4 5 6 7
2 3 4 5 6 7
1 2 3 4 5 6 7 
*/
