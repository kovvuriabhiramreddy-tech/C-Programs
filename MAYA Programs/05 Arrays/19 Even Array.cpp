#include <stdio.h>
int main(){
    int n,a[100],i,f=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) if(a[i]%2!=0){ f=0; break; }
    if(f) printf("True");
    else printf("False");
    return 0;
}
/*
Even Array

Program Description
An array can be called as an Even Array, if it contains only even numbers.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contain 'N' array elements.

Output Format
True, if the given array is an Even Array, False otherwise.

Constraints
1 = N = 100


Input-1
10

6078 9330 1512 1238 5080 7048 7023 6342 6430 177


Output-1
False


Input-2
9
12 192 14 16 18 36 42 58 84 


Output-2
True
*/
