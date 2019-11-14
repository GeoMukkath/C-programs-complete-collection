// Program to sort array into two seperate arrays of even and odd

#include<stdio.h>
#include<conio.h>

int main()
{
	int array[100], array_even[50], array_odd[50];
	int i, size,size1,size2;
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	printf("Please enter the elements of the array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
		printf("Please enter the elements of the array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
	
	
	for(i=0;i<size;i++)
	{
		if(array[i]%2==0)
		{
			scanf("%d",array_even[i]);
		}
		else 
		{
			scanf("%d",array_odd[i]);
		}
	}
	
	for(i=0;i<size;i++)
	{
	printf("Even array is %d, ",array_even[i]);
	printf("Even array is %d, ",array_odd[i]);
     }
     
	
}
