#include <stdio.h>
#include <string.h>
int main() 
{
    char str[10005];
    int count = 0, i;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "
")] = '\0';
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            count++;
    }
    if (strlen(str) > 0)
        count++;

    printf("%d", count);
    return 0;
}
/*
Count words in String

Program Description
 Write a program to count the total number of words in a string. 
 
Input Format
A single line contains a string S.

Output Format
Display the words count presented in the given String.

Constraints
String s contains alphabets,


1<=s<=104


Input-1
Technical hub


Output-1
2


Input-2
Aditya engineering college


Output-2
3
*/
