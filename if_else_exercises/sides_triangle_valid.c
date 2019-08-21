//Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include<stdio.h>
int main()
{
	int a,b,c ; 
	
	printf("Enter all the sides of a triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if((b+c>a) && (a+c>b) && (a+b>c))
	printf("It's a triangle");
	else
	printf("It's not a triangle");
}
