//Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>

int main()
{
	char C ; 
	printf("Enter an alphabet: ");
	scanf("%c",&C);
	if( C == 'a' || C == 'e' || C == 'i' ||C == 'o' ||C == 'u' ||C == 'A' ||C == 'E' ||C == 'I' ||C == 'O' ||C == 'U')
	printf("Its a vowel");
	else 
	printf("It's a consonant");
}
