#include <stdio.h>
int main(){
    int n,i,last;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--){
        if(a[i]%2!=0){
            last=a[i];
            break;
        }
    }
    printf("%d",last);
    return 0;
}
/*
Last odd number in an Array

Program Description
Find out the last odd number in the given array of elements, Assume atleast one odd number exists in given Array.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' Array elements.

Output Format
Display last odd number in Array.

Constraints
1 = N = 100


Input-1
5

10 55 15 13 8


Output-1
13


Input-2
7
1 2 3 4 5 6 7 


Output-2
7
*/
