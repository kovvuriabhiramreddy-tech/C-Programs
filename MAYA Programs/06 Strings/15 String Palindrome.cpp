#include <stdio.h>
int stringLength(char str[]) {
// Editable code starts here
   //Complete this Function
int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
// Editable code ends here
}
int isPalindrome(char str[]) {
// Editable code starts here
    //Complete this Function
    int left = 0;
    int right = stringLength(str) - 1;

    while (left < right) {
        char a = str[left];
        char b = str[right];

        // convert to lowercase (manual)
        if (a >= 'A' && a <= 'Z') a = a - 'A' + 'a';
        if (b >= 'A' && b <= 'Z') b = b - 'A' + 'a';

        if (a != b) return 0; // Not Palindrome

        left++;
        right--;
    }

    return 1; // Palindrome
// Editable code ends here
}

int main() {
// Constrained code starts here
    char string[10000];
    scanf("%[^
]s", string);

// Constrained code ends here

// Editable code starts here
    //print your output here
if (isPalindrome(string))
        printf("Palindrome");
    else
        printf("Not Palindrome");

// Editable code ends here

    return 0;
}
/*
String Palindrome

Program Description
Write a C program to check whether a string is palindrome or not with out using using string manipulation functions.
A word is said to be palindrome if the reverse of the word is the same as a word. For example, “abba” is a palindrome, but “abbc” is not a palindrome.
Note: Consider characters are not case sensitive. 

Input Format
First line of input contains a String.

Output Format
Print the Output According to the Description.

Constraints
Length of the String contains,


1<=s<=100


Input-1
madam


Output-1
Palindrome 


Input-2
acet


Output-2
Not Palindrome 
*/
