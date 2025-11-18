#include <stdio.h>
int main(){
    int n,even_sum=0,odd_sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(i%2==0 && a[i]%2==0) even_sum+=a[i];
        if(i%2==1 && a[i]%2==1) odd_sum+=a[i];
    }
    printf("%d %d",even_sum,odd_sum);
    return 0;
}
/*
Even Sum by Even Index and Odd Sum by Odd Index

Program Description
Given an array of elements as input you need to find the sum of even elements in the even indexed positions of the given array and find the sum of odd elements in the odd indexed positions of the given array and then print even sum followed by odd sum separated by space. If the array does not have any even elements or any odd elements then you need to print its corresponding sum as 0.

Input Format
First line consists of maximum size of the array

Second line consists of array elements

Output Format
A single line prints sum of even indexed even elements and sum of odd indexed odd elements of the given array separated by space.

Constraints
1<=N<=15


Input-1
5

10 20 45 61 73 


Output-1
10 61 


Input-2
4

1 2 3 4 


Output-2
0 0  
*/
