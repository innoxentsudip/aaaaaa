/*
Student Name:Sudip Kuikel
Subject:Programming Fundamentals
Roll No.:
Program:To calculate sum of digits of any numbers.
Lab No.:


Date:29-11-2016
*/
#include<stdio.h>
int main ()
{
int a,b,c,sum=0,count=0;

printf("Enter a number:");
scanf("%d",&a);
c=a;
while(a!=0)
{
b=a%10;
sum+=b;
a/=10;
count++;
}

printf("%d \n",sum);
printf("First digit=%d \n",b);
printf("Last digit=%d",c%10);
printf("Total numbers=%d",count);
return 0;
}
