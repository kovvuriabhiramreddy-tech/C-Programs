#include <stdio.h>
#include <string.h>

int main()
{
    char str[10005];  
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    str[strcspn(str, "
")] = '\0';

    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
        putchar(str[i]);

    putchar('
'); 
    return 0;
}
/*
Reverse a String

Program Description
Given a input string, Print the reversed String 

Input Format
Input line contains a String.

Output Format
Display the reversed String.

Constraints
String s contains


1<=s<=104


Input-1
codemind


Output-1
dnimedoc


Input-2
technical hub


Output-2
buh lacinhcet


Input-3
1 2 3 4 5 6 7 8 9


Output-3
9 8 7 6 5 4 3 2 1


Input-4
all test cases passed


Output-4
dessap sesac tset lla
*/
