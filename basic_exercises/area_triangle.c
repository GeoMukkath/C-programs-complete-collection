//Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
#include<math.h>

int main()
{
	int base, height; 
	float area;
	printf("Enter the base and height of the triangle: "); 
	scanf("%d%d",&base,&height);
	area = 0.5 * base * height;
	printf("The are of the triangle is %0.3f",area);
}

