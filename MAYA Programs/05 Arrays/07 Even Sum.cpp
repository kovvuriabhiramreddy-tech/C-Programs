#include <stdio.h>
int main(){
    int n,a[1000],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]%2==0)sum+=a[i];}
    printf("%d",sum);
    return 0;
}
/*
Even Sum

Program Description
Write a program to find the sum of even numbers in an array.

Input Format
First line contains size of the array denoting with integer N.

Second line contains N number of integers separated by space.

Output Format
Dplay the output of the problem.

Constraints
1 = N = 1000


Input-1
3
12 24 36  


Output-1
72


Input-2
4
23 54 67 98


Output-2
152
*/
