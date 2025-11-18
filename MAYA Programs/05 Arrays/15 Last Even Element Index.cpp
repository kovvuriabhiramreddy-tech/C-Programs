#include <stdio.h>
int main(){
    int n,last=-1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) if(a[i]%2==0) last=i;
    printf("%d",last);
    return 0;
}
/*
Last Even Element Index

Program Description
Find out the last even number index place,Assume atleast one odd number exists in given Array.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' Array elements.

Output Format
Display last even element position.

Constraints
1 = N = 100


Input-1
5

10 55 15 13 9


Output-1
0


Input-2
7
1 2 3 4 5 6 7 


Output-2
5
*/
