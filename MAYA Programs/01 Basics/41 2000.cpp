#include <stdio.h>

int main() {
    int N, notes;
    scanf("%d", &N);
    notes = (N * 2000) / 500;
    printf("%d", notes);
    return 0;
}
/*
2000

Program Description
Aditya had collected N notes of Rs.2000 to pay his total college fees. However, the government banned Rs.2000 notes.
Aditya wants to pay the same amount using Rs.500 notes only. Find the number of notes Aditya needs.

Input Format
A single line of input contains an integer N - the number of notes of Rs.2000 that Aditya has collected.

Output Format
Output a single integer - the number of Rs.500 notes needed.

Constraints
1<=N<=100

Input-1
4

Output-1
16

Input-2
10

Output-2
40
*/
