#include<stdio.h>
#include<conio.h>
int main()
{
	int array[15];
	int i, size,n_count=0;
	
	printf("Please enter the size of the array: ");
	scanf("%d",&size);
	
	printf("Enter the elements in the array: ");
	for(i=0;i<=size;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<=size;i++)
	{
		if(array[i]<0){
			n_count= n_count+1;
		}
	}
	
	printf("The number of negative numbers in the array are %d",n_count);
}
