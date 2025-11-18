#include<stdio.h>
int main ()
{
    int n,x,j,c=0;
    scanf("%d
",&n);
    int i[n];
    for (x=0;x<n;x++)
    {
        scanf("%d",&i[x]);
    }
    for (j=0;j<n;j++)
    {
        if ((i[j]%2!=0)&&(j%2!=0))
        {
            continue;
        }
        else if ((i[j]%2!=0)&&j%2==0)
        {
            continue;
        }
        else if ((i[j]%2==0)&&(j%2!=0))
        {
            printf("False");
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("True");
    }
}
/*
Strictly ODD

Program Description
An array can be called strictly odd, if every odd number in that array exists only at an odd index.


Note:It is guaranteed that there will be at least one odd number in the array.

Input Format
First-line contains an integer 'N' which indicates the length of the Array.
Next line contains 'N' array elements

Output Format
True if the array is strictly odd, False otherwise.

Constraints
1 = N = 100


Input-1
7

0 1 2 3 4 5 6


Output-1
True


Input-2
7
0 1 2 3 4 5 6 


Output-2
True
*/
