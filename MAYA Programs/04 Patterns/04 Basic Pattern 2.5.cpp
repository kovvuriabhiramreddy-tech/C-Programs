#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= n; j++) {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }
    
    return 0;
}
/*
Basic Pattern 2.5

Program Description
You will be given a number N.
Print the following Pattern.

Input Format
Only line of input contains an integer N.

Output Format
Print appropriate pattern.

Constraints
1<=N<=26

Input-1
7

Output-1
G 
F F 
E E E 
D D D D 
C C C C C 
B B B B B B 
A A A A A A A 

Input-2
5

Output-2
E
D D
C C C
B B B B
A A A A A 

Input-3
5

Output-3
G
F F
E E E
D D D D
C C C C C
B B B B B B
A A A A A A A  
*/
