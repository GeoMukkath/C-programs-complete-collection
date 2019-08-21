// Write a C program to check whether a number is even or odd using conditional operator.

#include<stdio.h>

int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number%2==0)
	printf("Number is even");
	else
	printf("Number is odd");
}

