/*
Student Name :Sudip Kuikel
Subject : Programming Fundamental
Lab No. : 16
Program : Write a to find the sum of square of first n numbers.
Date : 2016-11-22
*/
#include<stdio.h>
int main ()
{
	int i,n,sum=0,sq;
	printf("Enter numbers of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sq=i*i;
		sum+=sq;
	}
		printf("The sum of square of n natural numbers is %d",sum);
		return 0;
	}
	
