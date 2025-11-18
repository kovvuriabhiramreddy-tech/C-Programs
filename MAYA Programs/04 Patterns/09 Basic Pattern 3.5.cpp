#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
    
    return 0;
}
/*
Basic Pattern 3.5

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
A B C D E F G H I 
A B C D E F G H 
A B C D E F G 
A B C D E F 
A B C D E 
A B C D 
A B C 
A B 
A


Input-2
5

Output-2
A B C D E
A B C D
A B C
A B
A

Input-3
5

Output-3
A B C D E F G
A B C D E F
A B C D E
A B C D
A B C
A B
A 
*/
