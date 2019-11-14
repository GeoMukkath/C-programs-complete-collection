#include<stdio.h>

int main()
{
   int index,max=0,min=0,size;
   int arr[size];
   printf("Enter the array size: ");
   scanf("%d",&size);

   printf("Enter the elements in an array: ");

   for(index=0;index<size;index++)
   {
   	scanf("%d",&arr[index]);
   }
   
   for(index=0;index<size;index++)
   {
     if(arr[index]>max)
     {
     	max=arr[index];
	}
	else
	{
		min=arr[index];
	}
   }
   printf("Maximum: %d\n",max);
   printf("Minimum: %d",min);
}
