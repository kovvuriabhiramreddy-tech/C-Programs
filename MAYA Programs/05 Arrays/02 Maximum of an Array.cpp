#include <stdio.h>
int main(){
    int n,i,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++) if(a[i]>max) max=a[i];
    printf("%d",max);
    return 0;
}
/*
Maximum of an Array

Program Description
Find the maximum element from an given array.Input is n number of elements and an array of elements length is N.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' Array elements.

Output Format
Display Maximum of an Array.

Constraints
1 = N = 1000


Input-1
6
3 5 9 10 7 2


Output-1
10


Input-2
5
1 4 2 8 5 


Output-2
8
*/
