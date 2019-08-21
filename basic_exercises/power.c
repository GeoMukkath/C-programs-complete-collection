// Write a C program to find power of any number x ^ y.

#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c ;
	printf("Enter a raised to b : ");
	scanf("%d%d",&a,&b);
	c = pow(a,b);
	printf("%d raised to %d is %d",a,b,c);
}
