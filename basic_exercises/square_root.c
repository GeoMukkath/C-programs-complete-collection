// Write a C program to enter any number and calculate its square root.

#include<stdio.h>
#include<math.h>

int main()
{
	int a ;
	float b;
	printf("Enter a number: ");
	scanf("%d",&a);
	b = sqrt(a);
	printf("The square root of a is %0.2f", b);
}
