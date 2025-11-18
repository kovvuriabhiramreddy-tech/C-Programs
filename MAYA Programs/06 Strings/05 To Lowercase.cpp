#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[10000];
    scanf("%[^
]",s);
    for(int i=0;s[i];i++) s[i]=tolower(s[i]);
    printf("%s",s);
    return 0;
}
/*
To Lowercase

Program Description
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase. 

Input Format
A single line contains a string.

Output Format
Print the string output

Constraints
String s contains,


1<=s<=104


Input-1
Hello


Output-1
hello


Input-2
LOVELY


Output-2
lovely
*/
