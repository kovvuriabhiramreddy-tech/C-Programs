#include <stdio.h>

int main() {
    int n,i,P=1;
    printf("enter n value");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        P=P*i;
    }
    printf("\n %d factorial is %d",n,P);
    return 0;
}
