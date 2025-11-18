#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],odd[n],even[n],oi=0,ei=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]%2) odd[oi++]=a[i];
        else even[ei++]=a[i];
    }
    for(i=0;i<oi;i++) printf("%d ",odd[i]);
    for(i=0;i<ei;i++) printf("%d ",even[i]);
    return 0;
}
/*
Array of Odd and Even Elements

Program Description
Form an array of all odd elemnents and followed by even elements. Atleast one odd and even element will be presented in given array.


Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contain 'N' array elements.

Output Format
Return array of odd elements followed by even elements.

Constraints
1 = N = 100


Input-1
5

2 1 3 5 8


Output-1
1 3 5 2 8


Input-2
7
1 2 3 4 5 6 7 


Output-2
1 3 5 7 2 4 6 
*/
