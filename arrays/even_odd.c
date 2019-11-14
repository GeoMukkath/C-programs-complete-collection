#include<stdio.h>
#include<conio.h>

int main()
{
	int numbers[100];
	int i, size, even=0, odd=0 ; 
	
	printf("Enter the numbers in the array: ");
	scanf("%d",&size);
	
	printf("enter the elements in the array:");
	for(i=0;i<size;i++);
	{
		scanf("%d",&numbers[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(numbers[i]%2==0)
		{
			even=even+1 ; 
		}
		else
		{
			odd=odd+1 ; 
		}
	}
	
	printf("Hence the total number of even elements is %d\n",even);
	printf("Hence the total number of odd elements is %d",odd);
}
