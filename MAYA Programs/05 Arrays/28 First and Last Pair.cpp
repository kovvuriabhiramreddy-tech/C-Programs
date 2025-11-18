#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n/2;i++) printf("%d %d ",a[i],a[n-1-i]);
    if(n%2!=0) printf("%d 0",a[n/2]);
    return 0;
}
/*
First and Last Pair

Program Description
Given an array, find pairs of elements such that 1st element pair with the last element, 2nd element pair with last but one, .........
Note: if no pair is formed then pair that element with 0.


Input Format
First-line contains an integer 'N' which indicates the length of the Array
The next line contains 'N' array elements

Output Format
Display pairs of elements.

Constraints
1 <- N <= 100


Input-1
8

8 7 6 5 4 3 2 1


Output-1
8 1 7 2 6 3 5 4


Input-2
7
1 2 3 4 5 6 7 


Output-2
1 7 2 6 3 5 4 0 
*/
