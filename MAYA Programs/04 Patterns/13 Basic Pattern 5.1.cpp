#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d", i);
        for (int k = i + 1; k <= N; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
/*
Basic pattern 5.1

Program Description
You will be given a number N.
Print the following Pattern.
Sample I/O:

Input 1:
3

Output 1:
1**
22*
333 

Input 2:
5

Output 1:
1****
22***
333**
4444*
55555

Input Format
Only line of input contains an integer N.

Output Format
Print appropriate pattern.

Constraints
1<=N<=25

Input-1
7

Output-1
1******
22*****
333****
4444***
55555**
666666*
7777777

Input-2
9

Output-2
1********
22*******
333******
4444*****
55555****
666666***
7777777**
88888888*
999999999
*/
