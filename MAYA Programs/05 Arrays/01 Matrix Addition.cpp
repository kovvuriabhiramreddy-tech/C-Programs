#include <stdio.h>
int main(){
    int n,m;
    if(scanf("%d%d",&n,&m)!=2) return 0;
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
    int t1,t2;
    int total=n*m;
    int pos=0;
    if(scanf("%d%d",&t1,&t2)==2){
        if(t1==n && t2==m){
            for(int i=0;i<n;i++) for(int j=0;j<m;j++) scanf("%d",&b[i][j]);
        } else {
            b[0][0]=t1; pos=1;
            if(pos<total){ b[pos/m][pos%m]=t2; pos++; }
            for(;pos<total;pos++) scanf("%d",&b[pos/m][pos%m]);
        }
    } else return 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",a[i][j]+b[i][j]);
            if(j<m-1) printf(" ");
        }
        printf("
");
    }
    return 0;
}
/*
Matrix Addition

Program Description
Given two matrices of same size M x N, add them and print the resultant matrix.


Input Format
The first line of input will contain two space separated integers N and M,
denoting the number of rows and columns of the two input matrices.
Next N lines contains M space separated integers, the elements of first matrix.
Similarly, next N lines contains M space separated integers, the elements of second matrix.
Output Format
Output N lines contains M space separated integers, the elements of resultant matrix.
Constraints

1 = N, M = 1000


Input-1
3 3
1 2 3
1 2 3
1 2 3
3 3
1 2 3
4 5 6
7 8 9

 


Output-1
2 4 6
5 7 9
8 10 12  


Input-2
2 2
1 1
1 1
2 2
2 2
2 2 


Output-2
3 3
3 3 
*/
