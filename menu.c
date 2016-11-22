/*
Student Name : KABIR SHRESTHA
Subject : Programming Fundamental
Lab No. : 15
Program : Write a Menu base program.
Date : 2016-11-20
*/
#include<stdio.h>
int main ()
{
	int i,n,sum=0;
	printf("Enter numbers of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
		printf("The sum of n natural numbers is %d",sum);
		return 0;
	}
	
