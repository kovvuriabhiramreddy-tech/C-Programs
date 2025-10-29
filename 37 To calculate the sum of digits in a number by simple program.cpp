#include<stdio.h>
int main()
{
int n,r=0,s=0;
printf("enter digit : ");
scanf("%d",&n);
while (n!=0)
{
r=n%10;
n=n/10;
s=s+r;
}
printf("sum of digits=%d",s);
return 0;
}

