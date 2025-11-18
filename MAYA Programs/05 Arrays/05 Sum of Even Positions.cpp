#include <stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i+=2) sum+=a[i];
    printf("%d",sum);
    return 0;
}
/*
Sum of Even Positions

Program Description
Find the sum of elements in an array that are in an even index.

Input Format
First-line contains an integer 'N' which indicates the length of the Array
Next line contain 'N' array elements

Output Format
Display sum of even indexed elements.

Constraints
1 = N = 100


Input-1
7
1 2 3 4 5 6 7


Output-1
16


Input-2
6
25 30 45 50 70 55


Output-2
140
*/
