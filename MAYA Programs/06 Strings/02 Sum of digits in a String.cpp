#include <stdio.h>
int main(){
    char s[10000];
    int sum=0,i;
    scanf("%[^
]",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='0'&&s[i]<='9')
            sum+=s[i]-'0';
    }
    printf("%d",sum);
    return 0;
}
/*
Sum of digits in a String

Program Description
Read one string, within that string we have numerical values also, then we have to display the sum of that numbers in that string.

Input Format
A single line contains a string S.

Output Format
Display the sum of all numerical values in the string in a single line

Constraints
Length of the String S.


1<=S<=104


Explaination

Input-1
this is sudhir, expert in html5, css3,php3,bootstarp4




Output-1
15


Input-2
7777


Output-2
28


Input-3
this is sudhir


Output-3
0


Input-4
5st4t6


Output-4
15
*/
