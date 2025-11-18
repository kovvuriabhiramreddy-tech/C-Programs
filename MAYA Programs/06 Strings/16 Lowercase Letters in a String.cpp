#include <stdio.h>

int main() {
    char str[10000];
    int i, count = 0;
    scanf("%[^
]s", str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}
/*
Lowercase Letters in a String

Program Description
Lowercase Letters in a String.Given a input string, count the lower case letters in a given String.Note:String is case sensitive.  

Input Format
Input line contains String "S".

Output Format
Display the count of lower case lettrs.

Constraints
Length of the string s contains,


1<=s<=104


Input-1
codeMIND 


Output-1
4


Input-2
technical HUB


Output-2
9
*/
