#include <stdio.h>
#include <limits.h>
int main(){
    int n,a[100],A,B,i;
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d%d",&A,&B);
    if(A>B){int t=A;A=B;B=t;}
    int max_out=INT_MIN,found_out=0,max_in=INT_MIN,found_in=0;
    for(i=0;i<n;i++){
        if(a[i]<A||a[i]>B){ if(!found_out||a[i]>max_out) max_out=a[i]; found_out=1; }
        else if(a[i]>A&&a[i]<B){ if(!found_in||a[i]>max_in) max_in=a[i]; found_in=1; }
    }
    if(found_out) printf("%d",max_out);
    else if(found_in) printf("%d",max_in);
    else printf("-1");
    return 0;
}
/*
Maximum of numbers not between A and B

Program Description
Find out the maximum of the number of elements of given array of elements are not presented inbetween given integers A and B

Input Format
First-line contains an integer 'N' which indicates the length of the Array
Next line contain 'N' array elements
Next line contain two integer values A and B

Output Format
Display count of elements not existing inbetween A and B.if no maximum return -1.

Constraints
1 <= N <= 100


Input-1
5

2 6 8 9 7

1 7


Output-1
9


Input-2
7
1 2 3 4 5 6 7
2 5 


Output-2
7
*/
