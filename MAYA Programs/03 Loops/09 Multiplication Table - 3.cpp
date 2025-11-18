#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    
    for (int i = a; i <= b; i++) {
        printf("%d x %d = %d
", n, i, n * i);
    }
    
    return 0;
}
/*
Multiplication Table - 3

Program Description
You'll be given three numbers N, A and B. Print the multiplication table of number N from A TO B (Both inclusive). Refer to the sample I/O for more clarity.
It is guaranteed that ??<??

Input Format
A single line contains a three integers N, A, B.

Output Format
Print the multiplication table.

Constraints
1<=N<=104


Input-1
7 14 21 


Output-1
7 x 14 = 98
7 x 15 = 105
7 x 16 = 112
7 x 17 = 119
7 x 18 = 126
7 x 19 = 133
7 x 20 = 140
7 x 21 = 147 


Input-2
291 421 435


Output-2
291 x 421 = 122511
291 x 422 = 122802
291 x 423 = 123093
291 x 424 = 123384
291 x 425 = 123675
291 x 426 = 123966
291 x 427 = 124257
291 x 428 = 124548
291 x 429 = 124839
291 x 430 = 125130
291 x 431 = 125421
291 x 432 = 125712
291 x 433 = 126003
291 x 434 = 126294
291 x 435 = 126585 


Input-3
291 421 435


Output-3
16 x 71 = 1136
16 x 72 = 1152
16 x 73 = 1168
16 x 74 = 1184
16 x 75 = 1200
16 x 76 = 1216
16 x 77 = 1232 


Input-4
19 12 15


Output-4
19 x 12 = 228
19 x 13 = 247
19 x 14 = 266
19 x 15 = 285
*/
