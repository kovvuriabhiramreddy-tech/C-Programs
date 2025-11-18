#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000], ch;
    int i, found = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "
")] = '\0';
    scanf(" %c", &ch);
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == ch)
        {
            found = 1;
            printf("True
%d", i);
            break;
        }
    }

    if(!found)
        printf("False");

    return 0;
}
/*
Vowels in a String

Program Description
Given a input String and a vowel, find out weather given vowel is present in the String and return index position as well, if no such element in String return False 

Input Format
First-line contains a string S.
The next line contains vowel element.

Output Format
Display True/False. If True return index position next line.

Constraints
String s contains,


1<=s<=104


Input-1
codemind
e 


Output-1
3


Input-2
All test cases passed

a


Output-2
True

10


Input-3
time limit error

i


Output-3
True

1
*/
