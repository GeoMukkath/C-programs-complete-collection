#include<stdio.h>
#include<conio.h>

int main()
{
	int array1[100];
	int array2[100];
	int i, size, c=0 ; 
	
	printf("Enter the size of array1: \n");
	scanf("%d",&size);
	printf("Enter the size of array2: \n");
	scanf("%d",&size);
	
	printf("Enter the elements of the array: \n");
	for(i=0;i<size;i++);
	{
		scanf("%d",&array1[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("The original array is %d ",array1[i]);
	}
	
	for(i=0;i<=size;i++)
	{
		array2[i]=array1[i];
	}
	
	for(i=0;i<=size;i++)
	{
		printf("The copied array is %d, ",array2[i]);
	}

	
}
