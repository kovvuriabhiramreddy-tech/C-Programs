#include <stdio.h>
int main(){
    int n,a[1000],z,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&z);
    for(i=0;i<n;i++) if(a[i]==z) c++;
    printf("%d",c);
    return 0;
}
/*
Count of given element in an array

Program Description
Find the number of appearences of given element in a given an array

Input Format
First-line contains an integer 'N' which indicates the length of the Array
Next line contain 'N' array elements
Lastline consists of element z

Output Format
Display count of element z in the array

Constraints
1 = N = 1000


Input-1
7

1 2 3 4 5 6 7

8


Output-1
0


Input-2
7
1 2 3 4 5 6 7 


Output-2
0
*/
