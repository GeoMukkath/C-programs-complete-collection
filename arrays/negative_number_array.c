#include<stdio.h>

int main()
{
  int marks [8];
  int index;
  printf("Enter the numbers:\n");
  for(index=0;index<8;index++)
  {
  	scanf("%d",&marks[index]);
  }
  
  printf("The negative numbers are: \n");
  for(index=0;index<8;index++)
  {  
     if(marks[index]<0)
  	printf("%d\t",marks[index]);
  }
	
}
