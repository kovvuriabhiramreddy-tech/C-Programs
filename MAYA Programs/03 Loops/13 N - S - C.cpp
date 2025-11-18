#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int n = a + 1; n < b; n++) {
        printf("%d %d %d
", n, n * n, n * n * n);
    }
    
    return 0;
}
/*
N - S - C

Program Description
Take two numbers from user A and B respectively.
And print
n
sqaure of n (n2)
cube of n (n3)
where A < n < B
In other words print the NUMBER, SQUARE OF NUMBER and CUBE OF NUMBER for EVERY NUMBER from A to B (Both Exclusive). See the sample inputs for a better understanding.
It is guaranteed that A < B and B-A = 2

Input Format
A single line input contains two space separated integers.

Output Format
Print the output according to description.

Constraints
A < B and B-A = 2


Input-1
2 7


Output-1
Output1:
3 9 27
4 16 64
5 25 125
6 36 216


Input-2
13 21


Output-2
4 196 2744
15 225 3375
16 256 4096
17 289 4913
18 324 5832
19 361 6859
20 400 8000


Input-3
13 21


Output-3
80 6400 512000
*/
