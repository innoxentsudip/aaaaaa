/*
Student Name:Sudip Kuikel
Subject:BCS (hons)
Roll no.:
Lab No:8
Program:Program to find factorial number.
Date:2016-10-26
*/
#include<stdio.h>
//#include<conio.h>
int main ()
{
int fact=1,n;
printf("Enter the number you want to get factorial:");
scanf("%d",&n);


while (n!=0)
{
fact=fact*n;
--n;
}
printf("Factorial=%d",fact);


return 0;
}


