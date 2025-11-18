#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],even=0,odd=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0) even+=a[i][j];
            else odd+=a[i][j];
        }
    }
    printf("%d %d",even,odd);
    return 0;
}
/*
Sum of even and odd elements in a matrix

Program Description
Given a matrix A of size N x M. Find the sum of all even and the sum of all odd elements in the matrix.

Input Format
First-line contains integers 'N' and 'M' which indicates the row and column size of the matrix

In the next N lines, you are given M integers.

Output Format
Display the sum of all even elements and sum of all odd elements

Constraints
1 <= N <= 100


Input-1
3 2

1 2

3 5

3 1


Output-1
2 13


Input-2
3 3
1 2 3
4 5 6
7 8 9 


Output-2
20 25 
*/
