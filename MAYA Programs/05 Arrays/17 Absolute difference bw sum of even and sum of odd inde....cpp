#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,a[100],even=0,odd=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==0) even+=a[i];
        else odd+=a[i];
    }
    printf("%d",abs(even-odd));
    return 0;
}
/*
Absolute difference b/w sum of even and sum of odd indexed elements

Program Description
Find the absolute difference between the sum of even indexed elements and the sum of odd indexed elements in an array

Input Format
First-line contains an integer 'N' which indicates the length of the Array
Next line contain 'N' array elements

Output Format
Display the absolute difference between the sum of even indexed elements and the sum of odd indexed elements.

Constraints
1 = N = 100


Input-1
5

1 2 3 4 5


Output-1
3


Input-2
7
1 2 3 4 5 6 7 


Output-2
4
*/
