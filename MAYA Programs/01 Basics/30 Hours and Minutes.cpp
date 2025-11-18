#include <stdio.h>

int main() {
    int minutes, hours, remainingMinutes;
    scanf("%d", &minutes);
    hours = minutes / 60;
    remainingMinutes = minutes % 60;
    printf("%d Hour(s) %d Minute(s)", hours, remainingMinutes);
    return 0;
}
/*
Hours and Minutes

Program Description
Given an integer minutes .Convert the given minutes into HOURS and MINUTES form.

Input Format
Single line input contains one integer minutes

Output Format
Print the output in the from of number of Hour(s) and number of Minutes(s)

Constraints
1<=minutes<=100000

Input-1
100

Output-1
1 Hour(s) 40 Minute(s)

Input-2
325

Output-2
5 Hour(s) 25 Minute(s)

Input-3

Output-3
0 Hour(s) 14 Minute(s)
*/
