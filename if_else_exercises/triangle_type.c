//C program to check whether triangle is equilateral, scalene or isosceles

#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter all the sides of a triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b && b==c && a==c)
	printf("The triangle is equilateral");
	else if (a==b || b==c || a==c)
	printf("The triangle is isosceles");
	else
	printf("The triangle is scalene");
}
