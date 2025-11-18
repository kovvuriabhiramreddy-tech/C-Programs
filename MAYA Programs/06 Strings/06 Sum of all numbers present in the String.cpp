#include <stdio.h>
#include <ctype.h>

int main() {
    char str[10000];
    int sum = 0;

    scanf("%[^
]", str);  // Read input without any prompt

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            sum += str[i] - '0';
        }
    }

    printf("%d", sum);  // Print only the sum
    return 0;
}
/*
Sum of all numbers present in the String

Program Description
Write a program to find the sum of all numbers present in the string is discussed here. Given a string containing both numbers and alphabets, the task is to find the sum of all numbers present in the string.

Input Format
Input line contains both alphabets and numbers.

Output Format
Display the count of numbers present in the String.

Constraints
String s contains


1<=s<=104


Input-1
abc45def5ghi32 


Output-1
19


Input-2
jitu87ki9


Output-2
24


Input-3
i87h8i3o9


Output-3
35
*/
