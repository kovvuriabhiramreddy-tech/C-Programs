#include <stdio.h>
#include <string.h>

int main() {
    char str[10005];          
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '
') len--;  
    if (len > 0 && str[len-1] == '') len--;

    printf("%zu
", len);
    return 0;
}
/*
characters in string

Program Description
Given a string, find the number of elements or characters in the String.   

Input Format
Input contains a String.

Output Format
Display the count of elements or characters.

Constraints
Length of the String s contains


1<=s<=104


Input-1
codemind 


Output-1
8


Input-2
thub


Output-2
4
*/
