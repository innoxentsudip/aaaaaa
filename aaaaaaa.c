/*Students name:Sudip Kuikel
Subject:Programming Fundamental
Roll no:
Lab no. 1
Program:Write a program to read three sides of triangle to calculate A=[s(s-a)(s-b)(s-c)]^0.5
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
float a,b,c,s=0,area=0;
printf("Enter the value of a:");
scanf("%f",&a);
printf("Enter the value of b:");
scanf("%f",&b);
printf("Enter the value of c:");
scanf("%f",&c);
s=(a+b+c)/2;
printf("s=%f",s);
area=pow(s*(s-a)*(s-b)*(s-c),0.5);
printf("\nArea of triangle=%f",area);
getch();
}



