#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[100];
	int i, size ,num,pos;
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	printf("Enter the elements of the array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number you want to delete: ");
	scanf("%d",&num);
	
	printf("Enter the position of the element you want to delete: ");
	scanf("%d",&pos);
	
	for(i=size;i>pos;i--)
	{
		if(arr[i]==num)
		{
		      	arr[i]=arr[i+1];
		}
		else
		{
			arr[i]=arr[i-1];
		}
	}
	
	
		for(i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
	
}
