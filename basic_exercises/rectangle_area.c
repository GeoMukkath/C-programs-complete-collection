// Write a C program to enter length and breadth of a rectangle and find its area.
#include<stdio.h>

int main()
{
	int length, breadth,area ; 
	printf("Enter the length and breadth of the rectangle: ");
	scanf("%d%d",&length,&breadth);
	area = length * breadth; 
	printf("\nThe area of the rectangle is %d",area);
}
