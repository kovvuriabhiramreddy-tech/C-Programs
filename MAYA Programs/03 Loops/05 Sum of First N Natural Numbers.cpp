#include <stdio.h>

int main() {
    int n, sum;
    scanf("%d", &n);
    
    sum = n * (n + 1) / 2;
    
    printf("%d", sum);
    return 0;
}
/*
Sum of First N Natural Numbers

Program Description
You'll be given a number N.Find out Sum of first N natural numbers.

Input Format
A single line contains an integer N.

Output Format
Display the sum of N natural numbers.

Constraints
1<=n<=1000


Explaination
If N = 5,
then the sum of first N natural numbers are 1 2 3 4 5 and their sum is 1 + 2 + 3 + 4 + 5 = 15.


Input-1
5


Output-1
15  


Input-2
100


Output-2
5050
*/
