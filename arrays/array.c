#include<stdio.h>

int main()
{
  int marks [8];
  int index;
  printf("Pls enter your marks:\n");
  for(index=0;index<8;index++)
  {
  	scanf("%d",&marks[index]);
  }
  
  for(index=0;index<8;index++)
  {  
     if(marks[index]<0)
  	printf("%d\t",marks[index]);
  }
	
}
