/*
Student name:Sudip Kuikel
Subject:
Roll no.:
Lab no.:
Program:To find out largest number using nested if else.
Date:2016-10-20
*/
#include<stdio.h>


 int main()
 {
int a,b,c;
printf("Enter three numbers A B C");
scanf("%d   %d   %d",&a,&b,&c);
if (a>=b && a>=c)
	{
printf("%d is largest",a);
	}
else if (b>=a && b>=c)
	{
printf("\n%d is largest",b);
	}
else 
	{
printf("\n%d is greatest",c);
	}
return 0;
}
