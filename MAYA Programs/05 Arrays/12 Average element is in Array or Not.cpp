#include <stdio.h>
int main(){
    int n,i,a[100],sum=0,avg,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++){
        if(a[i]==avg){
            f=1;
            break;
        }
    }
    if(f) printf("True"); else printf("False");
    return 0;
}
/*
Average element is in Array or Not

Program Description
Find out the integer average of the given Array is presented as the list element or not, if it is present in array return True otherwise False.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' Array elements.

Output Format
Display True or False

Constraints
1 = N = 100


Input-1
5

10 11 13 14 15


Output-1
False


Input-2
7
1 2 3 4 5 6 7 


Output-2
True
*/
