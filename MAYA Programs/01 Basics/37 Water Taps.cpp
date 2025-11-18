#include <stdio.h>

int main()
 {
    int A, B;
    double time;
    scanf("%d %d", &A, &B);
    time = (A * B) / (double)(A + B);
    printf("%.0lf", time);
    return 0;
}
/*
Water Taps

Program Description
When two taps are working together to fill an empty tank, you can calculate the time it takes to fill the tank using the concept of rates.
Tap A fill the tank in X minutes.
Tap B fill the tank in Y minutes.

Input Format
A single input containing two space-separated two integers.

Output Format
Display output according to the problem.

Constraints
1 <= A,B <= 100

Input-1
20
30 

Output-1
12 

Input-2
10
40 

Output-2
8 
*/
