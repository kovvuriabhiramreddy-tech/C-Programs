#include <stdio.h>
int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);
    int sumN = 0, sumM = 0;
    for (int i = 1; i <= N / 2; i++) 
    {
        if (N % i == 0)
            sumN += i;
    }
    for (int i = 1; i <= M / 2; i++) 
    {
        if (M % i == 0)
            sumM += i;
    }
    if (sumN == M && sumM == N)
        printf("Amicable");
    else
        printf("Not Amicable");
    return 0;
}
/*
Amicable Numbers

Program Description
Write A Program to check whether a given number is Amicable Number or not and display Amicable Number or Not Amicable Number.
Amicable numbers: Two different numbers so related that the sum of the proper divisors of each is equal to the other number.
The first ten amicable pairs are: (220, 284), (1184, 1210).

Input Format
There will be two integers N and M in two different lines.

Output Format
Display that whether they are Amicable or Not Amicable.

Constraints
1<=N,M<=105


Explaination
Input 1:
220 : 1+2+4+5+10+11+20+22+44+55+110 = 284
284: 1+2+4+72+142 = 220


Input-1
220
284


Output-1
Amicable


Input-2
236
345


Output-2
 Not Amicable
 */
