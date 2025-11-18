#include <stdio.h>
int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){scanf("%d",&a[i]);sum+=a[i];}
    int avg=sum/n;
    for(int i=0;i<n;i++) if(a[i]>=avg) count++;
    printf("%d",count);
    return 0;
}
/*
Elements greater than average

Program Description
Find the number of elements in the array that are greater than or equal the average of the array.
Note: Average of the array means the average of elements in that array. Take only floor divison value for average of elements.

Input Format
First-line contains an integer 'N' which indicates the length of the array.
Next line contains 'N' array elements.

Output Format
Display count of elements.

Constraints
1 = N = 100


Input-1
7

1 2 3 4 5 6 7


Output-1
4


Input-2
7
1 2 3 4 5 6 7 


Output-2
4
*/
