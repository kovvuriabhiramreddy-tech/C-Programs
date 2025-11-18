#include <stdio.h>
int main() 
{
    int A, B;
    scanf("%d %d", &A, &B);
    for (int i = A; i <= B; i++) 
    {
        int num = i, digit, isSelfDividing = 1;

        while (num > 0) {
            digit = num % 10;
            if (digit == 0 || i % digit != 0) 
            {
                isSelfDividing = 0;
                break;
            }
            num /= 10;
        }

        if (isSelfDividing)
            printf("%d ", i);
    }

    return 0;
}
/*
Self-Dividing Numbers

Program Description
A self-dividing number is a number that is divisible by every digit it contains.
For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
Also, a self-dividing number is not allowed to contain the digit zero.
Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

Input Format
A single line input contains two-separated integers are A,B.

Output Format
Print the output according to the discription.

Constraints
1<=A<=B<=104


Input-1
1

22


Output-1
1 2 3 4 5 6 7 8 9 11 12 15 22


Input-2
10 20


Output-2
11 12 15
*/
