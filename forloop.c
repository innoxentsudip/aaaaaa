/*
Student Name:Sudip Kuikel
Subject:Write a program to check,entered number is prime or not.
Roll No.:
Lab No.:12
Date:2016-11-04
*/
#include<stdio.h>
//#include<conio.h>
int main ()
{
	int i,a,count=0;
	printf("Enter a number :");
	scanf("%d",&a);
	for (i=1;i<=a/2;i++)
	{
	
	if(a%i==0){
	count++;
	}
	}

if (count<=1)
{
	printf("%d is prime number",a);
}

else 
{
	printf("%d is not prime number",a);
}
	return 0;
}
	
