/*To sort a given array of strings into lexicographically increasing order or into an order in which the string with the lowest length appears first, a sorting function with a flag indicating the type of comparison strategy can be written. The disadvantage with doing so is having to rewrite the function for every new comparison strategy.

A better implementation would be to write a sorting function that accepts a pointer to the function that compares each pair of strings. Doing this will mean only passing a pointer to the sorting function with every new comparison strategy.

Given an array of strings, you need to implement a  function which sorts the strings according to a comparison function, i.e, you need to implement the function :

void string_sort(const char **arr,const int cnt, int (*cmp_func)(const char* a, const char* b)){
    
}
The arguments passed to this function are:

an array of strings : 
length of string array: 
pointer to the string comparison function: 
You also need to implement the following four string comparison functions:

 to sort the strings in lexicographically non-decreasing order.

 to sort the strings in lexicographically non-increasing order.

 to sort the strings in non-decreasing order of the number of distinct characters present in them. If two strings have the same number of distinct characters present in them, then the lexicographically smaller string should appear first.

 to sort the strings in non-decreasing order of their lengths. If two strings have the same length, then the lexicographically smaller string should appear first.

Input Format

You just need to complete the function string\_sort and implement the four string comparison functions.

Constraints

 No. of Strings 
 Total Length of all the strings 
You have to write your own sorting function and you cannot use the inbuilt  function
The strings consists of lower-case English Alphabets only.
Output Format

The locked code-stub will check the logic of your code. The output consists of the strings sorted according to the four comparsion functions in the order mentioned in the problem statement.

Sample Input 0

4
wkue
qoi
sbv
fekls
Sample Output 0

fekls
qoi
sbv
wkue

wkue
sbv
qoi
fekls

qoi
sbv
wkue
fekls

qoi
sbv
wkue
fekls*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int get_number_of_distinct_characters(const char* a){
    int is_letter_used[26] = {0};
    int i, total_distinct_characters = 0;
    for(i=0;i<strlen(a);i++){
        if(a[i]>='a' && a[i]<='z')
            is_letter_used[a[i]-'a']=1;
    }
    for(i=0;i<26;i++){
        total_distinct_characters += is_letter_used[i];
    }
    return total_distinct_characters;
}

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int i;
    int distinct_characters_a = get_number_of_distinct_characters(a);
    int distinct_characters_b = get_number_of_distinct_characters(b);
    //printf("%s %d, %s %d\n", a, unique_a_total, b, unique_b_total);
    if(distinct_characters_a == distinct_characters_b){
        return lexicographic_sort(a, b);
    }
    return distinct_characters_a > distinct_characters_b;
}

int sort_by_length(const char* a, const char* b) {
    int strlen_a = strlen(a);
    int strlen_b = strlen(b);
    if(strlen_a == strlen_b){
        return lexicographic_sort(a, b);
    }
    return strlen_a > strlen_b;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i, j;
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if((*cmp_func)(arr[i], arr[j])>0){
                char* temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}



int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
