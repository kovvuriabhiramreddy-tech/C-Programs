#include <stdio.h>
int main(){
    int n,m,i,j,a[100][100],sum;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(j=0;j<m;j++){
        sum=0;
        for(i=0;i<n;i++)
            sum+=a[i][j];
        printf("%d ",sum);
    }
    return 0;
}
/*
Column wise sum of a matrix

Program Description
Given a matrix A of size N x M. Find the sum of individual columns in the matrix.

Input Format
First-line contains an integers 'N'and 'M' which indicates the row and column size of matrix
In the next N lines, you are given M integers.

Output Format
Display the sum of individual columns

Constraints
1 <= N <= 100


Input-1
2 3

1 2 3

5 4 3


Output-1
6 6 6


Input-2
3 3
1 2 3
4 5 6
7 8 9 


Output-2
12 15 18 
*/
