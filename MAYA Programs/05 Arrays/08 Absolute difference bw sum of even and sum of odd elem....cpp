#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,se=0,so=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0) se+=a[i];
        else so+=a[i];
    }
    printf("%d",abs(se-so));
    return 0;
}
/*
Absolute difference b/w sum of even and sum of odd elements

Program Description
Find the absolute difference between the sum of even elements and the sum of odd elements in an array

Input Format
First-line contains an integer 'N' which indicates the length of the Array
Next line contain 'N' array elements

Output Format
Display the absolute difference between the sum of even elements and the sum of odd elements.

Constraints
1 = N = 1000


Input-1
7

1 2 3 4 5 6 7


Output-1
4
*/
