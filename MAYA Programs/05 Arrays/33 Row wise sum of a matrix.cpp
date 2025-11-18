#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++)
            sum+=a[i][j];
        printf("%d ",sum);
    }
    return 0;
}
/*
Row wise sum of a matrix

Program Description
Given a matrix A of size N x M. Find the sum of individual rows in the matrix.

Input Format
First-line contains integers 'N' and 'M' which indicates the row and column size of the matrix
In the next N lines, you are given M integers.

Output Format
Display the sum of individual rows

Constraints
1 <= N <= 100


Input-1
3 3

1 3 4

3 2 1

2 3 4


Output-1
8 6 9


Input-2
3 3
1 2 3
4 5 6
7 8 9 


Output-2
6 15 24 
*/
