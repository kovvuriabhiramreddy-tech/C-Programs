#include <stdio.h>

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    
    for (int i = 1; i <= r; i++) {
        printf("%d x %d = %d
", n, i, n * i);
    }
    
    return 0;
}
/*
Multiplication Table-2

Program Description
Print the MULTIPLICATION TABLE OF A GIVEN NUMBER N UPTO R TERMS (starting from 1).

Input Format
A single line contains two integers A,B.

Output Format
Print the multiplication table.

Constraints
1<=N<=104


Input-1
5 10 


Output-1
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50 


Input-2
12 24


Output-2
12 x 1 = 12
12 x 2 = 24
12 x 3 = 36
12 x 4 = 48
12 x 5 = 60
12 x 6 = 72
12 x 7 = 84
12 x 8 = 96
12 x 9 = 108
12 x 10 = 120
12 x 11 = 132
12 x 12 = 144
12 x 13 = 156
12 x 14 = 168
12 x 15 = 180
12 x 16 = 192
12 x 17 = 204
12 x 18 = 216
12 x 19 = 228
12 x 20 = 240
12 x 21 = 252
12 x 22 = 264
12 x 23 = 276
12 x 24 = 288


Input-3
12 24


Output-3
179 x 1 = 179
179 x 2 = 358
179 x 3 = 537
179 x 4 = 716
179 x 5 = 895
179 x 6 = 1074
179 x 7 = 1253
179 x 8 = 1432
179 x 9 = 1611
179 x 10 = 1790
179 x 11 = 1969
179 x 12 = 2148
179 x 13 = 2327
179 x 14 = 2506
179 x 15 = 2685
179 x 16 = 2864
179 x 17 = 3043

Input 4: 


Input-4
97 7


Output-4
97 x 1 = 97
97 x 2 = 194
97 x 3 = 291
97 x 4 = 388
97 x 5 = 485
97 x 6 = 582
97 x 7 = 679 
*/
