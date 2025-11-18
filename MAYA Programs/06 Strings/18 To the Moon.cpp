#include <stdio.h>
#include <string.h>

int main() {
    int N, i, ones = 0, zeros = 0;
    char votes[105];
    scanf("%d %s", &N, votes);
    for (i = 0; i < N; i++) {
        if (votes[i] == '1')
            ones++;
        else if (votes[i] == '0')
            zeros++;
    }
    if (ones > zeros)
        printf("gogi_to_the_moon");
    else
        printf("kiddo");
    return 0;
}
/*
To the Moon

Program Description
Tappu Sena has got an offer to go to the moon, but wait GOGI is too young to travel in a spaceship so he requires permission from the whole Gokuldham society.
Every member of the society votes either in favor or against, ‘1’ means a vote in favor, and ‘0’ means against.
You are given a binary string that contains the votes of the whole society, if the votes in favor are strictly greater than votes in against then print gogi_to_the_moon else print kiddo.
A binary string is a string that only has two characters 0 and 1

Input Format
The first line of input contains N-the total number of votes

The second line of input contains a binary string of length N

Output Format
Print whether GOGI will be able to go to the moon or not

Constraints
1<=N<=100


Input-1
5 10110


Output-1
gogi_to_the_moon


Input-2
6 100001


Output-2
kiddo
*/
