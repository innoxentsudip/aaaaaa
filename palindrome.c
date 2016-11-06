/*
Student Name:Sudip Kuikel
Subject:Write a program to check given number is palindrome or not.
Roll No.:23
Lab No.:12
Date:2016-11-06
*/
#include<stdio.h>
//#include<conio.h>
int main ()
{
int a,r,b=0,or;
printf("Enter a number=");
scanf("%d",&a);
or=a;
while (a!=0)
{
	r=a%10;
	b=b*10+r;
	a=a/10;
}
if (or== b)
{
        printf("%d is  Palindrome number.",or);
 }
    else
  
  {
	        printf(" %d is Not palindrome number.",or);
    
}
    return 0;
}
	
