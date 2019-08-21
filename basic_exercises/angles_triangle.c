// Write a C program to enter two angles of a triangle and find the third angle.

#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c ;
	printf("Enter two angles of a triangle: ");
	scanf("%d%d",&a,&b);
	c= 180 - (a+b);
	printf("The third angle is %d",c);
	
	
}
