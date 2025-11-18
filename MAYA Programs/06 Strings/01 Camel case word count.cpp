#include <stdio.h>
#include <string.h>
int main(){
    char s[10005];
    if(!fgets(s,sizeof s,stdin))return 0;
    s[strcspn(s,"
")]=0;
    if(s[0]==0){printf("0");return 0;}
    int c=0;
    for(int i=0;s[i];i++)if(s[i]>='A'&&s[i]<='Z')c++;
    if(s[0]>='a'&&s[0]<='z')c++;
    printf("%d",c);
    return 0;
}
/*
Camel case word count

Program Description
Given a CamelCase sequence represented as a string. The task is to find the number of words in the CamelCase sequence.
Note:CamelCase is the sequence of one or more than one words having the following properties:
 It is a concatenation of one or more words consisting of English letters.
 All letters in the first word are lowercase.
For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.

Input Format
A single line contains a string S.

Output Format
Display the count of camelcase in a single line.



Constraints
Length of the String


1<=String<=104


Input-1
ThecodemindComputation


Output-1
2


Input-2
TechnicalhubcodeComputation


Output-2
2


Input-3
TechnicalhubcodeComputation


Output-3
4


Input-4

Output-4


*/
