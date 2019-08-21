// Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

#include<stdio.h>

int main()
{
	float cel , fahr ; 
	printf("Enter the temperature(C): ");
	scanf("%f",&cel);
	fahr = (cel * 9/5 ) + 32;
	printf("\nThe temperature in fahranheit is %f ",fahr);
	
}
