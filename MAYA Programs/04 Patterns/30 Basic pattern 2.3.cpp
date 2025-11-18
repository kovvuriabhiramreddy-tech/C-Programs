#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + j);     // print the letter
            if(j < i-1)                // print space only between letters
                printf(" ");
        }
        printf("\n");                  // new line after each row
    }
    return 0;
}
/*
Basic Pattern 2.3

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
3

Output-1
A 
A B 
A B C 

Input-2
5

Output-2
A 
A B 
A B C 
A B C D 
A B C D E 

Input-3
10

Output-3
A 
A B 
A B C 
A B C D 
A B C D E 
A B C D E F 
A B C D E F G 
A B C D E F G H 
A B C D E F G H I 
A B C D E F G H I J 
*/
