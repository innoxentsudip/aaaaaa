/*
Student name:Sudip Kuikel
Subject:
Roll no.:
Lab no.:
Program:
Date:2016-10-20
*/
#include<stdio.h>
int main ()
{
int a,b,c;
printf("Enter three numbers=");
scanf("%d %d %d",&a,&b,&c);
(a>=b && a>=c)?printf("%d is largest",a):
(b>=c && b>=a)?printf("%d is largest",b):
printf("%d is greatest",c);
return 0;
}
