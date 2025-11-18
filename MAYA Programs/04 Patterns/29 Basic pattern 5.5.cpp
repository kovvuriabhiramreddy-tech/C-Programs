#include <stdio.h>
int main()
{
    int n,i,j;
    if(scanf("%d",&n)!=1) return 0;
    for(i=1;i<=n;i++)
	{
        for(j=i;j<n;j++) printf("*");
        for(j=1;j<=i;j++) printf("%d",i);
        if(i!=n)  printf("\n");
    }
    return 0;
}
/*
Basic Pattern 5.5

Program Description
You will be given a number N.
Print the following Pattern.

Input Format
Only line of input contains an integer N.

Output Format
Print appropriate pattern.

Constraints
1<=N<=10

Input-1
5

Output-1
****1

***22

**333

*4444

55555

Input-2
7

Output-2
******1

*****22

****333

***4444

**55555

*666666

7777777
*/
