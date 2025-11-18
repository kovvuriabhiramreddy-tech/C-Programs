#include <stdio.h>
int main(){
    int n,a[100],sum=0,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&a[i]);sum+=a[i];}
    int avg=sum/n;
    for(int i=0;i<n;i++) if(a[i]<=avg) count++;
    printf("%d",count);
    return 0;
}
/*
Elements Smaller than Average

Program Description
Given an array, find the number of elements in the array that are smaller than or equal to the average value of the array.
Note: Average value of the array means, the average of elements in the given array consider only floor Divison value for the average.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' array elements.

Output Format
Display the count of elements.

Constraints
1 = N = 100


Input-1
6

2 5 3 7 4 6


Output-1
3


Input-2
7
1 2 3 4 5 6 7 


Output-2
4
*/
