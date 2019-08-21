//Write a C program to enter P, T, R and calculate Simple Interest.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float SI, principal,rate,time;
	printf("-------- Simple Interest Calculator --------");
	printf("\nAmount = ");
	scanf("%f",&principal);
	printf("\nRate of interest = ");
	scanf("%f",&rate);
	printf("\nTime = ");
	scanf("%f",&time);
	SI = (rate * time* principal) /100;
	printf("Simple Interest = %0.3f",SI);
}
