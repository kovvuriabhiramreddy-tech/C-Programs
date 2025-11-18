#include <stdio.h>
int main(){
    int t,n,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    printf("%d\n",a[i]);
                    break;
                }
            }
            if(j!=n) break;
        }
    }
    return 0;
}
/*
Find Duplicate

Program Description
You are given an array of integers nums containing N elements. Each integer is in the range [1, N-1], with exactly one element repeated in the array.
Your task is to find the duplicate element.
All the integers in the array appear only once except for precisely one integer which appears two or more times. 

Input Format
The first line of input contains an Q noting the number of test cases.
The first line of each test case contains an integer N, the number of elements in the array.
The second line of each test case contains N space-separated integers representing the elements of the array.

Output Format
For each test case, the duplicate element of the given array is printed in new line

Constraints
1 <= T <= 5
1 <= N <= 10^5
1 <= nums[i] <= N - 1

Input-1
1
4
1 2 2 3

Output-1
2
*/
