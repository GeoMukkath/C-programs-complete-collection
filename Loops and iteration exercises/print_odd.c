// Write a C program to print all odd number between 1 to 100.

#include<stdio.h>


int main()
{
int i = 1 ;

while(i<=100 && i%2!=0)
{
	printf("%d\n",i);
	i= i +2;
}
}
