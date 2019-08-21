// Write a C program to enter length and breadth of a rectangle and find its perimeter.

#include<stdio.h>

int main()
{
	int length, breadth, perimeter; 
	printf("Enter the lenth and breadth of a rectangle: ");
	scanf("%d%d",&length,&breadth);
	perimeter = (2*length) + (2*breadth);
	printf("\nThe perimeter of your rectangle is %d",perimeter);
}
