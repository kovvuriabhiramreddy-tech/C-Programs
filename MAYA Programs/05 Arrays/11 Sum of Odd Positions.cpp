#include <stdio.h>
int main(){
    int n,a[100],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n;i+=2) sum+=a[i];
    printf("%d",sum);
    return 0;
}
/*
Sum of Odd Positions

Program Description
Find the sum of elements in an array that are in an odd index.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contain 'N' Array elements.

Output Format
Display sum of odd indexed elements.

Constraints
1 = N = 100


Input-1
5

3 5 4 8 1


Output-1
13


Input-2
7
1 2 3 4 5 6 7 


Output-2
12
*/
