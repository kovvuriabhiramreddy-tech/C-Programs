#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        for (int k = i; k < N; k++)
            printf("*");
        printf("\n");
    }

    return 0;
}
/*
Basic Pattern 5.4

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
123456789
12345678*
1234567**
123456***
12345****
1234*****
123******
12*******
1********

Input-2
5

Output-2
12345
1234*
123**
12***
1**** 

Input-3
5

Output-3
1234567
123456*
12345**
1234***
123****
12*****
******  
*/
