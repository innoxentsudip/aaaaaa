/*
Student name:Sudip kuikel 
Subject: Programming Fundamental
Lab No:
Roll No.
Program:To use bitwise operator
Date: 2016-10-19
*/
#include<stdio.h>

int main ()
{
int a,b;
printf("Enter a number=");
scanf("%d",&a);
printf("Enter other number=");
scanf("%d",&b);
printf("\nUSE OF BITWISE OPERATOR\n");

printf("\nAND operator=%d\n",a&b);
printf("\nOR operator=%d\n",a|b);
printf("\ncomplement operator=%d\n",~b);
printf("\n XOR operator=%d",a^b);

return 0;
}
