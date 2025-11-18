#include <stdio.h>
int main(){
    int n,a,b,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
        if(arr[i]<a||arr[i]>b)sum+=arr[i];
    printf("%d",sum);
    return 0;
}
/*
Sum of Elements not between A and B

Program Description
Sum of the number of elements of given array of elements are not presented inbetween given integers A and B.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' array elements.
Next line contains two integer values A and B.

Output Format
Display sum of elements not existing inbetween A and B.

Constraints
1 = N = 100


Input-1
7

1 2 3 4 5 6 7

2 5


Output-1
14
*/
