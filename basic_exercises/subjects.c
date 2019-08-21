//Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include<stdio.h>

int main()
{
	int maths,eng,geo,hindi,science;
	float total,average, percentage;
	printf("Enter your marks for the subjects out of 100 - ");
	printf("\nMaths: ");
	scanf("%d",&maths);
	printf("English: ");
	scanf("%d",&eng);
	printf("Geography: ");
	scanf("%d",&geo);
	printf("Hindi: ");
	scanf("%d",&hindi);
	printf("Science: ");
	scanf("%d",&science);
	total = maths + eng + geo + hindi + science ;
	average = total/5;
	percentage = (total/500) * 100;
	printf("Total = %f/500\n",total);
	printf("Average = %0.2f\n",average);
	printf("Percentage = %0.2f\n",percentage);
	
}
