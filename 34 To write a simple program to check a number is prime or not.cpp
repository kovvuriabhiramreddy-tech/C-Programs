#include<stdio.h>
int main()
{
int n,m=1,s=0;
printf("eneter a number : ");
scanf("%d",&n);
while (m<=n)
{
m++;
s=n%m;
if (s==0) 
{
break;
}
}
if (m==n)
{
printf("%d is a prime number",n);
}
else 
{
printf("%d is not a prime number",n);
}
}
