#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[10];
	int i,size,pos,num;
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	printf("Enter the elements of the array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number you want to insert: ");
	scanf("%d",&num);
	
	printf("Enter the position you want the number to be inserted to : ");
	scanf("%d",&pos);
	
	for(i=size;i>=pos;i--)
	{
		if(i==pos)
		{
			arr[i]=num;
		}
		else
		{
			arr[i]=arr[i-1];
		}
		
	}
	
	for(i=0;i<size+1;i++)
	{
		printf("%d, ",arr[i]);
	}
	
	
}
