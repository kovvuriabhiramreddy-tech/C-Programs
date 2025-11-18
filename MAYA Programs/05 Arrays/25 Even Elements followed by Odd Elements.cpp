#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) if(a[i]%2==0) printf("%d ",a[i]);
    for(int i=0;i<n;i++) if(a[i]%2==1) printf("%d ",a[i]);
    return 0;
}
/*
Even Elements followed by Odd Elements

Program Description
Form an array of all even elemnents and followed by odd elements. Atleast one odd and even element will be presented in given array.


Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' array elements.

Output Format
Return array of even elements followed by odd elements.

Constraints
1 = N = 100


Input-1
5

2 1 3 5 8


Output-1
2 8 1 3 5


Input-2
7
1 2 3 4 5 6 7 


Output-2
2 4 6 1 3 5 7 
*/
