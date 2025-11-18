#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= 12; i++) {
        printf("%d x %d = %d
", n, i, n * i);
    }
    
    return 0;
}
/*
Multiplication Table - 1

Program Description
Print the multiplication table of the given number N upto 12 terms (starting from 1).

Input Format
A single contains an integer N.

Output Format
Print the multiplication table.

Constraints
1<=N<104


Input-1
5


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
5 x 11 = 55
5 x 12 = 60  


Input-2
149


Output-2
149 x 1 = 149
149 x 2 = 298
149 x 3 = 447
149 x 4 = 596
149 x 5 = 745
149 x 6 = 894
149 x 7 = 1043
149 x 8 = 1192
149 x 9 = 1341
149 x 10 = 1490
149 x 11 = 1639
149 x 12 = 1788


Input-3
149


Output-3
16 x 1 = 16
16 x 2 = 32
16 x 3 = 48
16 x 4 = 64
16 x 5 = 80
16 x 6 = 96
16 x 7 = 112
16 x 8 = 128
16 x 9 = 144
16 x 10 = 160
16 x 11 = 176
16 x 12 = 192


Input-4
57


Output-4
57 x 1 = 57
57 x 2 = 114
57 x 3 = 171
57 x 4 = 228
57 x 5 = 285
57 x 6 = 342
57 x 7 = 399
57 x 8 = 456
57 x 9 = 513
57 x 10 = 570
57 x 11 = 627
57 x 12 = 684
*/
