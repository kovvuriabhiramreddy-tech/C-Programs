#include <stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) sum+=a[i];
    printf("%.2f",(float)sum/n);
    return 0;
}
/*
Average of the Array

Program Description
Find out the average value of given array

Input Format
First-line contains an integer 'N' which indicates the length of the Array
Next line contain 'N' array elements

Output Format
Display two decimal average value

Constraints
1 = N = 100


Input-1
6
1 4 5 9 3 8


Output-1
5.00


Input-2
7
1 2 3 4 5 6 7


Output-2
4.00 
*/
