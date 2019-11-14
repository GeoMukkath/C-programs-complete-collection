#include<stdio.h>
#include<conio.h>

int main()
{
	int array[100];
	int i, size, num=0;
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
     printf("Enter the elements of the array: ");
     for(i=0;i<size;i++)
     {
     	scanf("%d",&array[i]);
	}
	printf("Enter the element you want to search in the array: ");
	scanf("%d",&num);
	
	for(i=0;i<size;i++)
	{
		if(array[i]==num)
		printf("The number %d is present at index %d",array[i],i+1);
		
	}
	
}
