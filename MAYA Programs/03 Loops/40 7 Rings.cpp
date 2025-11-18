#include <stdio.h>

int main() {
    int n, x, total;
    scanf("%d %d", &n, &x);
    
    total = n * x;
    
    if (total >= 10000 && total <= 99999)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
/*
7 Rings

Program Description
In Poland, a valid phone number consists of 5 digits with no leading zeros.
For example, 98765,10000, and 71023 are valid phone numbers while 04123,9231, and 872310 are not.
Alice went to a store and purchased N items, where the cost of each item is X.
Find whether the total bill is equivalent to a valid phone number.

Input Format
A single line of input consists of two space-separated integers N and X — the number of items Alice bought and the cost per item.

Output Format
Output on a new line, YES, if the total bill is equivalent to a valid phone number and NO otherwise.

Constraints
1<= N,X <=1000


Input-1
25 785


Output-1
YES


Input-2
402 11


Output-2
NO
*/
