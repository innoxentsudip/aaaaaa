/*
Student Name:Sudip Kuikel
Subject:BCS (Hons.)
Roll No.:23
Lab no:13
Program:To print your name 10 times
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
int i,age;
char name[20],gender[6],address[20];
printf("Enter your Name:");
scanf("%s",&name);
printf("Enter an address:");
scanf("%s",&address);
printf("Enter your gender:");
scanf("%s",&gender);
printf("Enter your age:");
scanf("%d",&age);
printf("\n\n");

for(i=0;i<=5;i++)
{
printf("My name is %s \n",name);
printf("I live in %s \n",address);
printf("I am %s \n",gender);
printf("I am %d years old \n",age);


}
getch();
}
