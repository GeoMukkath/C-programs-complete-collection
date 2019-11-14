#include<stdio.h>
#include<conio.h>

int main()
{
	int array[100];
	int i,j, size, temp, num=0;
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
     printf("Enter the elements of the array: ");
     for(i=0;i<size;i++)
     {
     	scanf("%d",&array[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<=size;j++)
		{
			if(array[j]<array[i])
			{
			temp = array[i];
			array[i]=array[j];
			array[j]=temp;
		     }
		}
	}
	printf("The array in ascending order is :");
	for(i=0;i<size;i++)
	{
		printf("%d, ",array[j]);
	}
}
