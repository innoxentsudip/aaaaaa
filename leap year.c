/*
Student name:Sudip kuikel 
Subject: Programming Fundamental
Lab No:
Roll No.
Program:To find leap year
Date: 2016-10-19
*/
#include<stdio.h>

int main ()
{
int days;
printf("Program  to show the given year is leap year or not.\n");
printf("Enter a days in February=");
scanf("%d",&days);
if (days==29)
{
	printf("This year is a leap year",days);
}
else if (days<=28)
{
printf("This year is not a leap year",days);
}
else 
{
	printf("Invalid");
}
return 0;
}
