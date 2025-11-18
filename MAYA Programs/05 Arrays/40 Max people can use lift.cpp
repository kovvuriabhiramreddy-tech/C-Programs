#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){return (*(int*)a)-(*(int*)b);}
int main(){
    int maxp,maxw,n;
    if(scanf("%d %d",&maxp,&maxw)!=2) return 0;
    if(scanf("%d",&n)!=1) return 0;
    int *a=malloc(n*sizeof(int));
    for(int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) a[i]=0;
    qsort(a,n,sizeof(int),cmp);
    int count=0,sum=0;
    for(int i=0;i<n && count<maxp;i++){
        if(sum+a[i]<=maxw){sum+=a[i];count++;}else break;
    }
    printf("%d",count);
    free(a);
    return 0;
}
/*
Max people can use lift

Program Description
Input Format
First line consists of two integres Maxp and Maxw.
Second line consists of one integer N i.e Total number of people waiting outside
Third line consists of N number of integers representing N people weights.
Output Format
Print the output according to the description.

Constraints
1 <= N <=10000

Input-1
6 120
10
23 45 18 22 10 14 67 30 24 8

Output-1
6
*/
