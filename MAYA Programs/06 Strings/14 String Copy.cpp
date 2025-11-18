#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10000], str2[10000];
    gets(str1);
    strcpy(str2, str1);
    printf("%s", str2);
    
    return 0;
}
/*
String Copy

Program Description
Write a Program to copy one String data into another String. 

Input Format
First line of input contains String.

Output Format
Print the String output.

Constraints
length of the String s contains,


1<=s<=104


Input-1
Aditya College


Output-1
Aditya College 


Input-2
Thub


Output-2
Thub
*/
