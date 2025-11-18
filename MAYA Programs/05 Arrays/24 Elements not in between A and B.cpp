#include <stdio.h>
int main(){
    int n,a[100],A,B,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d%d",&A,&B);
    for(int i=0;i<n;i++){
        if(a[i]<A||a[i]>B){
            printf("%d ",a[i]);
            f=1;
        }
    }
    if(!f) printf("-1");
    return 0;
}
/*
Elements not in between A and B

Program Description
Print the number of elements of given array of elements are not presented in-between given integers A and B.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contain 'N' array elements.
Next line contain two integer values A and B.

Output Format
Display elements not existing inbetween A and B, if no such output return -1.

Constraints
1 = N = 100


Input-1
5

2 6 8 9 7

1 7


Output-1
8 9


Input-2
7
1 2 3 4 5 6 7
2 5 


Output-2
1 6 7 
*/
