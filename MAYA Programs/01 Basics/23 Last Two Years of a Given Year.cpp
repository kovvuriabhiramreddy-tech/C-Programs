#include <stdio.h>

int main() {
    int year, lastTwo;
    scanf("%d", &year);
    lastTwo = year % 100;
    printf("%02d", lastTwo);
    return 0;
}
/*
Last Two Digits of a Given Year

Program Description
Given an Integer Year. Print the last two digits of Year.

Input Format
A single line of input contains an integer Year.

Output Format
Print the last two digits of the given Year.

Constraints
1000<=Year<=3000

Input-1
2012

Output-1
12

Input-2
1902

Output-2
02
*/
