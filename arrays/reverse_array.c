#include<stdio.h>
#include<conio.h>

int main()
{
	int array[100];
	int i, size;
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	printf("Enter the elements of the array: ");
	for(i=0;i<size;i++)
	{
	scanf("%d",&array[i]);
     }
	for(i=size-1;i>=0;i--)
	{
		printf("%d, ",array[i]);
	}
}
