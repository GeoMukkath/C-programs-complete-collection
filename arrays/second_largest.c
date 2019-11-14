#include<stdio.h>

int main()
{
	int arr[5];
	int max1,max2,min;
	int index;
	for(index=0;index<5;index++)
	{
		scanf("%d",&arr[index]);
	}
	
	for(index=0;index<5;index++);
	{
		if(arr[index]>max1)
		{
			max2 = max1;
			max1=arr[index];
			
		}
		else
		{
			min = arr[index];
		}
	}
	printf("The second largest number is %d",max2);
}

