#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    
    return 0;
}
/*
1 to 10

Program Description
Print all the numbers from 1 to 10.

Input Format
A single line input containing one integer.

Output Format
Print the output according to the discription.

Constraints
1<=N<=104


Input-1
1 10


Output-1
1 2 3 4 5 6 7 8 9 10
*/
