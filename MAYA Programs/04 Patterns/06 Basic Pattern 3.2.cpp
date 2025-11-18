#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}
/*
Basic Pattern 3.2

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
1 1 1 1 1 1 1 1 1 
2 2 2 2 2 2 2 2 
3 3 3 3 3 3 3 
4 4 4 4 4 4 
5 5 5 5 5 
6 6 6 6 
7 7 7 
8 8 
9

Input-2
5

Output-2
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5

Input 2:
7

Output 2:
1 1 1 1 1 1 1
2 2 2 2 2 2
3 3 3 3 3
4 4 4 4
5 5 5
6 6
7  

Input-3
5

Output-3
1 1 1 1 1 1 1
2 2 2 2 2 2
3 3 3 3 3
4 4 4 4
5 5 5
6 6
7  
*/
