#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, correct, wrong, diff;
    scanf("%d %d", &A, &B);
    correct = A + B;
    wrong = A * B;
    diff = abs(correct - wrong);
    printf("%d", diff);
    return 0;
}
/*
AB Difference

Program Description
Vijay is taking his baby steps into the world of programming.
The very first program he's tasked to write is as follows: "Given two integers A and B, print A+B."
Unfortunately, Vijay makes a typo: his program outputs A×B instead of A+B.
Given the values of A and B, can you help Vijay find the absolute difference between the correct answer and the value his program prints?

Input Format
The only line of input will contain two space-separated integers, A and B.

Output Format
Print a single integer: the difference between the correct answer and Vijay's output.

Constraints
1<=A,B<=10

Input-1
4 7

Output-1
17

Input-2
1 6

Output-2
1
*/
