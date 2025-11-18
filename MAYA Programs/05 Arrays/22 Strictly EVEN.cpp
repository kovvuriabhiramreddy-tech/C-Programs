#include <stdio.h>
int main(){
    int n,i,a[100],f=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]%2==0 && i%2!=0){
            f=0;
            break;
        }
    }
    if(f) printf("True"); else printf("False");
    return 0;
}
/*
Strictly EVEN

Program Description
An array can be called strictly even, if every even number in that array exists only at an even index.

Input Format
First-line contains an integer 'N' which indicates the length of the Array
Next line contain 'N' array elements

Output Format
True if the array is strictly even, False otherwise.

Constraints
It is guaranteed that there will be at least one even number in the array.


Input-1
4

9 11 16 18


Output-1
False


Input-2
7
0 1 2 3 4 5 6 


Output-2
True
*/
