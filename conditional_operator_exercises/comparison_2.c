// Write a C program to find maximum between three numbers using conditional operator

#include<stdio.h>

void main()
{
	int n1 ,n2,n3; 
	printf("Enter three numbers : ");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	printf("%d is greater than %d and %d",n1,n2,n3);
	else if(n2>n1 && n2>n3)
	printf("%d is greater than %d and %d",n2,n1,n3);
	else
	printf("%d is greater than %d and %d",n3,n2,n1);
	
}
