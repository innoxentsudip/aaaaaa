/*
Student's Name:Prashant Raj Bhikshu
Subject: Programming Fundamentals
Lab:05
Program:
Date:2016/9/27
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float p,r,t,ci;
	printf("\n Enter Principal:");
	scanf("%f",&p);
	printf("\n Enter Rate:");
	scanf("%f",&r);
	printf("\n Enter Time:");
	scanf("%f",&t);
	ci=p*pow(1+0.01*r,t)-p;
	printf("Compound interset= %f",ci);
	getch();
}
