#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        for (int k = i + 1; k <= N; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
/*
Basic Pattern 5.2

Program Description
You will be given a number N.
Print the following Pattern.
Sample I/O:
Input 1:
5
Output 1:

Input 2:
7
Output 2:

Input Format
Only line of input contains an integer N.

Output Format
Print appropriate pattern.

Constraints
1<=N<=25

Input-1
9

Output-1
1********
12*******
123******
1234*****
12345****
123456***
1234567**
12345678*
123456789

Input-2
5

Output-2
1****
12***
123**
1234*
12345 

Input-3
5

Output-3
1******
12*****
123****
1234***
12345**
123456*
1234567 
*/
