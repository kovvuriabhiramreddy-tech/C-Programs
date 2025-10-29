#include<stdio.h>
int main()
{
int a=1,n;
printf("even numbers from 1 to ");
scanf("%d",&n);
while (a<=n)
{
if (a%2==0)
{
printf("\n%d",a);
}
a++;
}
}
