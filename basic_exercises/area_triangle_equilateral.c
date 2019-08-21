// Write a C program to calculate area of an equilateral triangle.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float side, area;
	printf("Enter the length of the side of the equilateral triangle: ");
	scanf("%f",&side);
	area = (sqrt(3)/4) * (side*side);
	printf("The area of the triangle is %0.3f",area);
}
