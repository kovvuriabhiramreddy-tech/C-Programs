#include <stdio.h>
#include <stdlib.h>
int main(){
    int Q;
    if(scanf("%d",&Q)!=1) return 0;
    while(Q--){
        int N;
        long long T;
        scanf("%d %lld",&N,&T);
        long long *a = N? malloc(N*sizeof(long long)):NULL;
        for(int i=0;i<N;i++) scanf("%lld",&a[i]);
        int l=0,r=N;
        while(l<r){
            int m=(l+r)/2;
            if(a[m]<T) l=m+1;
            else r=m;
        }
        printf("%d
",l);
        if(a) free(a);
    }
    return 0;
}
/*
Find Index Position

Program Description
You are given a sorted array 'Nums' of length 'N' with distinct integers and a target integer 'T'.
 You need to return the position of 'T' if it existed in the array 'Nums'. If it already exists in 'Nums', return that position. (0-based indexing) 
For example:
If the given array 'Nums' is: [2,5,8,9] and T = 6. We insert T = 6 in the array and get 'A' as: [2,5,6,8,9]. The position of 6 is 2 (according to 0-based indexing)
Note:
1) The given array has distinct integers.
2) The given array may be empty. 

Input Format
The first line of input contains a single integer 'Q', representing the number of test cases or queries to be run.
Then the 'Q' test cases follow.
The first line of each test case contains two space-separated integers 'N' and 'T', representing the length of the array and the target integer.
The second line of each test case contains 'N' space-separated integers, Ai representing the given array.

Output Format
For each test case, print a single line containing a single integer denoting the position of 'T' in the final array, on a new line.
The output of each test case will be printed in a separate line.

Constraints
1 = T = 10
0 = N = 10 ^ 5
1 = T = 10 ^ 9
1 = Nums[i] = 10 ^ 9

Follow Up:
Try to solve the problem in O(log N).

Explaination
Explanation Of Sample Input 1:
Test case 1 :
The first test case is already explained in the problem statement.
Test case 2 :
The second test case, the given array 'Nums' is: [1, 2, 4, 7] and T = 9.
We insert T=9 in the array and get 'Nums' as: [1, 2, 4, 6, 9]. The position of 9 is 4 (according to 0-based indexing)
Explanation Of Sample Input 2 :
Test case 1 :
The first test case, the given array 'Nums' is: [2, 5, 7] and T = 1.
We insert T = 1 in the array and get 'Nums' as: [1, 2, 5, 7]. The position of 1 is 0 (according to 0-based indexing)
Test case 2 :
The second test case, the given array 'Nums' is: [2, 5, 7] and T = 5.
We insert T = 5 in the array and get 'Nums' as: [2, 5, 7].(since the array can have only distinct integers. The position of 5 is 1 (according to 0-based indexing)

Input-1
2
4 6
1 2 4 7
4 9
1 2 4 7

Output-1
3
4

Input-2
2
3 1
2 5 7
3 5
2 5 7

Output-2
0
1
*/
