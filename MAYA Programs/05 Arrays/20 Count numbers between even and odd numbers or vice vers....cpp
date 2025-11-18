#include <stdio.h>
int main(){
    int n,a[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=1;i<n-1;i++)
        if((a[i-1]%2==0&&a[i+1]%2!=0)||(a[i-1]%2!=0&&a[i+1]%2==0))
            c++;
    printf("%d",c);
    return 0;
}
/*
Count numbers between even and odd numbers or vice versa

Program Description
Findout count of numbers which are in-between even and odd elements or vice versa.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' array elements.

Output Format
Display count.

Constraints
1 = N = 100


Input-1
5

1 3 2 5 4


Output-1
1


Input-2
7
1 2 4 5 6 7 7 


Output-2
3
*/
