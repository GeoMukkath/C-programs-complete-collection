// Write a C program to find maximum between two numbers using conditional operator.

#include<stdio.h>

int main()
{
	int n1 ,n2; 
	printf("Enter two numbers : ");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	printf("%d is greater than %d",n1,n2);
	else
	printf("%d is greater than %d",n2,n1);
	
}
