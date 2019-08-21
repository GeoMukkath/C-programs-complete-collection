// Write a C program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>

int main()
{
	char ch;
	printf("Enter an alphabet : ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	printf("Its typed in lower case");
	else if (ch>='A' && ch<='Z')
	printf("Its typed in upper case");
	else
	printf("Its not an alphabet");
	
}
