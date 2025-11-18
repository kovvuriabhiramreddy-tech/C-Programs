#include <stdio.h>

int main() {
    int X, Y, Z, totalMoney, chocolates;
    scanf("%d %d %d", &X, &Y, &Z);
    totalMoney = (X * 5) + (Y * 10);
    chocolates = totalMoney / Z;
    printf("%d", chocolates);
    return 0;
}
/*
Romeo and Juliet

Program Description
Romeo has X 5 rupee coins and Y 10 rupee coins. Romeo goes to a shop to buy chocolates for Juliet where each chocolate costs Z rupees. Find the maximum number of chocolates that Romeo can buy for Juliet.

Input Format
Three different lines of input contains integers X,Y,Z-number of 5 rupee coins,number of 10 rupee coins,cost of each chocolate respectively

Output Format
Print maximum number of chocolates that Romeo can buy for Juliet

Constraints
1<=X,Y,Z<=1000

Input-1
10
10
10

Output-1
15

Input-2
4
4
1000

Output-2
0

Input-3

Output-3
16
*/
