#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }
    
    return 0;
}

/*
Basic Pattern 3.4

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
9

Output-1
I I I I I I I I I 
H H H H H H H H 
G G G G G G G 
F F F F F F 
E E E E E 
D D D D 
C C C 
B B 
A

Input-2
5

Output-2
E E E E E
D D D D
C C C
B B
A

Input-3
5

Output-3
G G G G G G G
F F F F F F
E E E E E
D D D D
C C C
B B
A  
*/
