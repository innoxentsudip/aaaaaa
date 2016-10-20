/*
Student Name:Sudip Kuikel
Subject:BCS-IT
Roll No.:
Lab No.:
Program:To use assignment operator
Date:2016/10/20
*/
#include<stdio.h>

int main() {
int a,b;
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
printf("\n\tUSE OF ASSIGNMENT OPERATORS");

a+=b;
printf("\nThe use of += operator=%d",a);
a-=b;
printf("\nThe use of -= operator=%d",a);
a*=b;
printf("\nThe use of *= operator=%d",a);
a/=b;
printf("\nThe use of /= operator=%d",a);
a%=b;
printf("\nThe use of %= operator=%d",a);
a=b;
printf("\nThe use of = operator=%d",a);
return 0;
}






