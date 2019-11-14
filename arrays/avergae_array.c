#include<stdio.h>

int main()
{
  int index,size,sum = 0;
  float average;
  int figures [size];
  printf("Enter the size of the array: ");
  scanf("%d",&size);
  printf("Enter the numbers:\n");
  for(index=0;index<size;index++)
  {
  	scanf("%d",&figures[index]);
  }
  
  printf("The average of array is: ");
  for(index=0;index<size;index++)
  {  
    sum += figures[index];
    average= (float)sum/size;
    
  }
   printf("%.2f",average);	
}
