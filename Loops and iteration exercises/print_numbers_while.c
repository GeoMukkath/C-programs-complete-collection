// Write a C program to print all natural numbers from 1 to n. - using while loop

#include<stdio.h>

int main()
{
	int i =0,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i++ ;
	}
}


