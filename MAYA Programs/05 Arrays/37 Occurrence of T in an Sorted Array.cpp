#include <stdio.h>
int main(){
    int n,x,count=0;
    scanf("%d%d",&n,&x);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) if(a[i]==x) count++;
    printf("%d",count);
    return 0;
}
/*
Occurrence of T in an Sorted Array

Program Description
You have been given a sorted array/list of integers of size N and an integer X. Find the total number of occurrences of X in the array/list. 
Input Format
The first line of the input contains two integers N and X. They represent the size of the array/list and X respectively.
The second line contains N single space-separated integer representing the array/list elements.

Output Format
The only line of output will print the total number of occurrences of X in the array/list.

Constraints
1 <= N <= 10^5
1 <= Arr[i] <= 10^9
Where Arr[i] represents the element i-th element in the array/list.
Time Limit: 1sec

Explaination
Explanation For Sample Input 1:
In the given list there are 4 occurrences of 6.

Input-1
10 6
2 4 5 6 6 6 6 7 8 9

Output-1
4

Input-2
 5 6
 1 2 4 4 5

Output-2
0
*/
