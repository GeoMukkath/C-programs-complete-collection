#include<stdio.h>
#include<conio.h>

int main()
{
	int array[100];
	int i,  size, count_1 = 0, count_2=0, count_3=0, count_4=0;
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	printf("Enter the elements of the array: ");
	scanf("%d",&array[i]);
	
	for(i=0;i<size;i++)
	{
		if(array[i]==1)
		{
			count_1= count_1 +1;
			
		}
		else if(array[i]==2)
		{
			count_2 = count_2 +1; 
		}
		else if(array[i]==3)
		{
			count_3 = count_3 +1 ;
		}
		else if(array[i]==4)
		{
			count_4 = count_4 +1 ;
		}
		 
	}
	
	printf("1 = %d, 2= %d, 3 = %d, 4 = %d",count_1, count_2, count_3, count_4);
}
