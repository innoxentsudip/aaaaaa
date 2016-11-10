/*
Student Name:Sudip Kuikel
Subject:Programming Fundamental
Program:To make menu based program
Roll No.:
Lab No.:
Date:2016-11-10
*/
#include<stdio.h>
int main ()
{
int a,x,b,i,count=0;
char ch;
printf("\n ****************************************************");
printf("\n *      Menu                                        *");
printf("\n * Choose any Number:                               *");
printf("\n * 1.Check odd or even                              *");
printf("\n * 2.Check prime or not                             *");
printf("\n * 3.Check vowel or not                             *");
printf("\n * 4.Check ASCII value                              *");
printf("\n ****************************************************\n");
printf("\n");

scanf("%d",&a);
switch (a)
{
case 1:

printf("Enter any number");
scanf("%d",&x);
		if (x%2==0)
		 {
			printf("%d is even number \n",x);
		 }
		else
		 { 
			printf("%d is odd number \n",x);
		 }



	break;
	
	case 2:


	printf("Enter a number:");
	scanf("%d",&b);
	for (i=1;i<=b/2;i++)

		{
	
		if(b%i==0)
		{
		count++;
		}
		}

	if (count<=1)
	{
		printf("%d is prime number",b);
	}

	else 
	{
		printf("%d is not prime number",b);
	}
break;
}
	 
return 0;
}







