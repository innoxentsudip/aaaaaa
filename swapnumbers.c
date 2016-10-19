/*
Student name:Sudip kuikel 
Subject: Programming Fundamental
Lab No:
Roll No.
Program:To swap two numbers.
Date: 2016-10-19
*/
#include<stdio.h>
int main ()
{
int x,y,temp;
printf("\n\tBefore Swapping\n\n");
printf("Enter a number X=");
scanf("%d",&x);
printf("Enter other number Y=");
scanf("%d",&y);
temp=x;
x=y;
y=temp;
printf("\n\tAfter Swapping\n");
printf("\nThe value of X is %d",x);
printf("\nThe value of Y is %d",y);
return 0;
}




