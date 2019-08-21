// C program to find all roots of a quadratic equation

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c, delta,root,root1, root2;
	printf("Enter the coefficients: ");
	scanf("%f%f%f",&a,&b,&c);
	delta = (b*b)- (4*a*c);
	if(delta>0)
	{
		root1= (-b + sqrt(delta))/(2*a);
		root2= (-b - sqrt(delta))/(2*a);
		printf("Square root1 = %f \n Square root2 = %f",root1,root2);
	}
	else
	{
		root = -b/(2*a);
		printf("Square root = %f",root);
	}
	
}
