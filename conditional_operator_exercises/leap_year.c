// Write a C program to check whether year is leap year or not using conditional operator.

#include<stdio.h>

//If a year is exactly divisible by 4 and not divisible by 100 then its Leap year.
//Else if year is exactly divisible 400 then its Leap year.
//Else its a Common year.

int main()
{
   int year;
   printf("Enter a year:  ");
   scanf("%d",&year);
   if(year%4==0 && year%100!=0)
   printf("Its a leap year");
   else if(year%400 == 0)
   printf("its a leap year");
   else
   printf("It's not a leap year");	
}
