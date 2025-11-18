#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("%d", i);
        for (int k = i; k < N; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
/*
Basic Pattern 5.3

Program Description
You will be given a number N.
Print the following Pattern.

Input Format
Only line of input contains an integer N.

Output Format
Print appropriate pattern.

Constraints
1<=N<=25

Input-1
9

Output-1
999999999
88888888*
7777777**
666666***
55555****
4444*****
333******
22*******
1********

Input-2
5

Output-2
55555
4444*
333**
22***
1**** 

Input-3
5

Output-3
7777777
666666*
55555**
4444***
333****
22*****
1******  
*/
