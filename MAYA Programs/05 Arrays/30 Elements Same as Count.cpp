#include <stdio.h>
int main(){
    int n,a[100],i,j,cnt,printed_vals[100],p=0,first=1;
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        int already=0;
        for(int k=0;k<p;k++) if(printed_vals[k]==a[i]){already=1;break;}
        if(already) continue;
        cnt=0;
        for(j=0;j<n;j++) if(a[j]==a[i]) cnt++;
        if(cnt==a[i]){ printed_vals[p++]=a[i]; if(!first) printf(" "); printf("%d",a[i]); first=0; }
    }
    if(p==0) printf("-1");
    return 0;
}
/*
Elements Same as Count

Program Description
Given an array, find the elements their value equals the count of their occurrence in the array.
Note: 1) Print the elements in the given order.
2) If no elements satisfy the above condition print -1.

Input Format
First-line contains an integer 'N' which indicates the length of the Array
The next line contains 'N' array elements

Output Format
Display elements satisfying given conditions.

Constraints
1 <= N <= 100


Input-1
8

2 3 4 5 6 5 4 7


Output-1
-1


Input-2
7
1 2 3 4 5 6 2 


Output-2
1 2 
*/
