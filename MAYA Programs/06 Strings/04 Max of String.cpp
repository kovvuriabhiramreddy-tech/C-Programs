#include <stdio.h>
int main(){
    char s[1000],max;
    scanf("%[^
]",s);
    max=s[0];
    for(int i=1;s[i]!='\0';i++){
        if(s[i]>max)max=s[i];
    }
    printf("%c",max);
    return 0;
}
/*
Max of String

Program Description
You as a developer,write a logic to find maximum valued character from a given string without using default functions.

Input Format
Output Format
Constraints
Input-1
Output-1
*/
