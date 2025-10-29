#include<stdio.h>
main()
{
	char ch;
	char word[20];
	char sen[200];
	printf("Enter a character ");
	scanf(" %c",&ch);
	printf("Enter a Word ");
	scanf(" %s",&word);
	printf("Enter a Sentence ");
	scanf(" %[^\n]",&sen);
	printf("\n Character is %c \n Word is %s \n Sentence is %s",ch,word,sen);

} 
