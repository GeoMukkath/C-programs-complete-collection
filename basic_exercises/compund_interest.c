// C program to calculate Compound Interest

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float CI, principal,rate,time;
	printf("-------- Simple Interest Calculator --------");
	printf("\nAmount = ");
	scanf("%f",&principal);
	printf("\nRate of interest = ");
	scanf("%f",&rate);
	printf("\nTime = ");
	scanf("%f",&time);
	CI = principal * pow((1 + rate/100),time);
	printf("Simple Interest = %0.3f",CI);
}
