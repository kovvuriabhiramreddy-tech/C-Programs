#include<stdio.h>
int main()
{
int n,a=1,s=0;
printf("sum of how mny natural numbers : ");
scanf("%d",&n);
while (a<=n)
{
s=s+a;
a++;
}
printf("sum of %d natural numbers is %d",n,s);
return 0;
}
