#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int n,i,j,f;
    char s[103];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        f=0;
        for(j=0;s[j];j++){
            if(isdigit(s[j])){
                f=1;
                break;
            }
        }
        if(f) printf("Yes
"); else printf("No
");
    }
    return 0;
}
/*
String contains digits or not

Program Description
Mr Jhon wants to know weather his employee mail ids contain any digits or not. write a logic to find out digits from a given mail id.
If mail id contains numbers return Yes, or else No

Input Format
First line indicates no.of test cases 'N'

Next 'N' lines contains String 'S'

Output Format
Display Yes/No for all 'N' Strings

Constraints
String contains Alphabets and digits and Special Symbols.


String length contains


1<=String<=102


Input-1
2

python27@gmail.com

sudhir@gmail.com


Output-1
Yes

No 


Input-2
1

Donmari@gmail.com 


Output-2
No
*/
