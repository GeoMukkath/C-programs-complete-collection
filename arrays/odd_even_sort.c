#include<stdio.h>
#include<conio.h>

int main()
{
	int array[100];
	int i,e,o, size;
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
     printf("Enter the elements of the array: ");
     for(i=0;i<size;i++)
     {
     	scanf("%d",&array[i]);
	}
	printf("Even numbers: ");
	for(i=0;i<size;i++)
	{
		if(array[i]%2==0)
		{
			printf("%d ",array[i]);
		}		
	}
	
	printf("Odd numbers: ");
	for(i=0;i<size;i++)
	{
		if(array[i]%2!=0)
		{
			printf("%d ",array[i]);
		}		
	}
}
