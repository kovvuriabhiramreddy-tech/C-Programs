#include <stdio.h>

int main() {
    int n, rev = 0;
    scanf("%d", &n);
    
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    
    printf("%d", rev);
    return 0;
}
/*
Reverse of a Number

Program Description
Mr. Jhon and Mr. Javid are best friends, and javid is habbituated to read in right to left, write a logic to take a number in jhon point of view and print it in Javid perspective.

Input Format
A single line input contains an integer N.

Output Format
Display the given integer N in revers order.

Constraints
1<=N<=105


Explaination
The Given Number is 1234-->revers order-->4321


Input-1
1234


Output-1
4321  


Input-2
2431


Output-2
1342
*/
