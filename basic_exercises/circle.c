// Write a C program to enter radius of a circle and find its diameter, circumference and area.

#include<stdio.h>
#include<math.h>
#define pi 3.142

int main()
{
	float r,dia,circ,area;
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);
	dia  = 2 * r;
	circ = 2 * pi * r; 
	area = 2 * pi * r * r ;
	printf("The diameter is %.1f \n",dia);
	printf("The circumference is %0.4f \n",circ);
	printf("The area is %.4f \n",area);
}
