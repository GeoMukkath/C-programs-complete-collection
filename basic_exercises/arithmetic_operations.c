#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,sum = 0,sub,mul;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	sum= a +b ;
	sub = a-b;
	mul = a *b;
	float div =(float)a/b;
	printf("\n The sum of %d and %d is %d",a,b,sum);
	printf("\n The sub of %d and %d is %d",a,b,sub);
	printf("\n The mul of %d and %d is %d",a,b,mul);
	printf("\n The div of %d and %d is %.2f",a,b,div);
}

