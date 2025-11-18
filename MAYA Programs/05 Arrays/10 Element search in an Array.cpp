#include <stdio.h>
int main(){
    int n,a[100],x,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++)if(a[i]==x){f=1;break;}
    printf(f?"True":"False");
    return 0;
}
/*
Element search in an Array

Program Description
Find weather the given element is presented in the given Array or not.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' Array elements.
Last line contains element to check for appearence.

Output Format
Display True or False.

Constraints
1 = N = 100


Input-1
4
1 4 5 8
2


Output-1
False


Input-2
7
1 2 3 4 5 6 7
5 


Output-2
True
*/
