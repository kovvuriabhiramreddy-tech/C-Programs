#include <stdio.h>
int main(){
    int n,i,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<n;i++) if(a[i]<min) min=a[i];
    printf("%d",min);
    return 0;
}
/*
Minimum element of an array

Program Description
Find the minimum element from given array. Given n is length of array, and a is the array of elements length n.

Input Format
A single line input containing length of array is integer.
Next line containing elements of array.

Output Format
Display output according to the problem.

Constraints
1 = N = 1000



Input-1
6

2 1 3 6 9 8


Output-1
1


Input-2
5
1 2 5 3 0 


Output-2
0
*/
