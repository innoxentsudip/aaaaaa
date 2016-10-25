
/*
 Student name:Sudip kuikel
 Subject: Bcs (Hons)
 Program:Write a program that takes 3 inputs as integer from keyboard then 
 print sum,average product,smallest and largest among these numbers.
Roll No.:
Lab no:
Date:2016-10-25
*/
#include<stdio.h>
int main ()
{
	int a,b,c,add,average,product;
	printf("Enter three numbers=");
	scanf("%d %d %d",&a,&b,&c);
	add=a+b+c;
	average=add/3;
	product=a*b*c;
	
	printf("\n Addition=%d",add);
	printf("\n Average=%d",average);
	printf("\n Product=%d",product);
	
		
		
		(a>=b&&a>=c)?printf("\nThe largest value is: %d",a):
		(b>=c&&b>=a)?printf("\nThe largest value is: %d",b):
		printf("\nThe largest value is: %d",c);
		
		(a<=b&&a<=c)?printf("\nThe smallest value is: %d",a):
		(b<=c&&b<=a)?printf("\nThe smallest value is: %d",b):
		printf("\nThe smallest value is: %d",c);
		
		
		return 0;
	}
	
