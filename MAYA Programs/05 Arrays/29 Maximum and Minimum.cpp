#include <stdio.h>
int main(){
    int n,a[100],i,j,f,min=-1,max=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        f=0;
        for(j=0;j<n;j++) if(a[i]==a[j]) f++;
        if(a[i]==f){
            if(min==-1||a[i]<min) min=a[i];
            if(max==-1||a[i]>max) max=a[i];
        }
    }
    if(min==-1) printf("-1");
    else printf("%d %d",min,max);
    return 0;
}
/*
Maximum and Minimum

Program Description
Given an array, find the maximum and minimum values in the array that satisfy the below condition.
Condition:Condition is the element value and the number of times that element is present in the array must be the same.

Note: If no element is satisfying the given condition print -1.
Input Format
First-line contains an integer 'N' which indicates the length of the Array.
The next line contains 'N' array elements.

Output Format
Display minimum and maximum element satisfying given condition.

Constraints
1 <= N <= 100


Input-1
8

2 3 4 5 3 2 7 8


Output-1
2 2


Input-2
7
1 2 3 4 5 6 2 


Output-2
1 2 
*/
