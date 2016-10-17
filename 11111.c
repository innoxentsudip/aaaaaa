/*
 multiple line comment
 
 Student name:Sudip kuikel
 Subject:Programming Fundamental
 Roll No:
 Lab no:
 Program :Write a program to print either a number is positive negative or zero
 Date:2016-10-17
 */
#include<stdio.h> 

int main (){
	int n;
	printf("Enter a number=");
	scanf("%d",&n);
	if (n>0)
	{
	printf("%d is positive number",n);
}
else if (n<0)
	{
printf("%d is negative number",n);
	}
else 
{
	printf("%d is zero",n);
}
	return 0;
}
