// Write a C program to print all even numbers between 1 to 100. - using while loop


#include<stdio.h>

int main()
{
int i = 0 ;

while(i<=100 && i%2==0)
{
	printf("%d\n",i);
	i= i +2;
}	

}


