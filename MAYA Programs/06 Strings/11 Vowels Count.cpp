#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[10005];
    int count = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }

    printf("%d", count);
    return 0;
}
/*
Vowels Count

Program Description
Write a Program to count vowels in a given String. 

Input Format
A single line contains a string S.

Output Format
Display the words count presented in the given String.

Constraints
String contains alphabets


1<=s<=104


Input-1
aec acoe acet


Output-1
7


Input-2
thub


Output-2
1


Input-3
aditya


Output-3
3
*/
