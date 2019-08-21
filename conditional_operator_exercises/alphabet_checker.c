//Write a C program to check whether character is an alphabet or not using conditional operator.

#include<stdio.h>

int main()
{
	char alpha;
	printf("Enter an alphabet : ");
	scanf("%c",&alpha);
	if((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z') )
	printf("You have entered an alphabet");
	else
	printf("You have not entered an alphabet");
}
