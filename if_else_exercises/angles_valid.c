// Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include<stdio.h>
int main()
{
	int a,b,c ; 
	
	printf("Enter all the angles of a triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	printf("It's a triangle!");
	else
	printf("It's not a triangle");
}
