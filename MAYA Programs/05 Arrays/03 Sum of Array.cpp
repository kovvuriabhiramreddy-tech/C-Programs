#include <stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) sum+=a[i];
    printf("%d",sum);
    return 0;
}
/*
Sum of Array

Program Description
Find the sum of given Array elements.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' Array elements.
Output Format
Display sum of elements.

Constraints
1 = N = 100


Input-1
5
2 4 6 8 7


Output-1
27


Input-2
7
1 2 3 4 5 6 7 


Output-2
28
*/
