#include <stdio.h>
#include <ctype.h> 
int main()
{
    char s[10005];
    int count = 0, i;
    scanf("%[^
]s", s);
    for(i = 0; s[i] != '\0'; i++)
    {
        if(isupper(s[i]))
            count++;
    }
    printf("%d", count);
    return 0;
}
/*
Uppercase Letters in a String

Program Description
Given a input string, count the upper case letters in a given String.
Note:String is case sensitive. 

Input Format
Input line contains String "s".

Output Format
Display the count of upper case letters.

Constraints
Length of the string s


1<=s<=104


Input-1
codeMIND 


Output-1
4


Input-2
TeChNiCaL HuB


Output-2
7
*/
