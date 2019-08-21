// Write a C program to enter length in centimeter and convert it into meter and kilometer.

#include<stdio.h>

int main()
{
	float length,meter, km;
	printf("Enter the length in centimeter: ");
	scanf("%f",&length);
	meter = 0.01 * length;
	km = 0.00001 * length;  
	printf("Meter : %f",meter);
	printf("Kilometer : %f",km);
}
