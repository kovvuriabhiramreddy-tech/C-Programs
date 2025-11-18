#include <stdio.h>
int main(){
    int n,a[100],i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n-1;i++)
        if(a[i]%2==0 && a[i-1]%2!=0 && a[i+1]%2!=0)
            count++;
    printf("%d",count);
    return 0;
}
/*
Count Even Numbers between Odd Numbers

Program Description
Findout the count of even numbers,which are in between odd numbers of given array.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' Array elements.

Output Format
Display count of even numbers.

Constraints
1 = N = 100


Input-1
5

2 3 4 5 3


Output-1
1


Input-2
7
1 2 3 4 5 6 7 


Output-2
3
*/
