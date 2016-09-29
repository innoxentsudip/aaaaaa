/* Name:Sudip Kuikel
Subject:Programming Fundamental
Program:Write a program that asks the name student and marks obtained by him/her in seven subjects.

Display the percentage of student assuming full marks 100
Lab no.3 */
#include<stdio.h>
#include<conio.h>

void main ()
{
char name[10];
float math,science,english,economics,computer,social,gk,total,percent;
printf("Name of student\n\n\n");
scanf("%s,&name");
printf("\n\nMath: ");
scanf("%f",&math);
printf("Science: ");
scanf("%f",&science);
printf("English: ");
scanf("%f",&english);
printf("Economics: ");
scanf("%f",&economics);
printf("Computer: ");
scanf("%f",&computer);
printf("Social: ");
scanf("%f",&social);
printf("GK:");
scanf("%f",&gk);
total=math+science+english+economics+computer+social+gk;
printf("total marks =%f",total);
percent=(total/7)*100;
printf("\nPercentage=%d",percent);
getch();
}
