/*
 Student name:Sudip kuikel
 Subject: BCS (Hons)
 Program:While loop for calculating n numbers
Roll No.:
Lab no:
Date:2016-10-25
*/
#include<stdio.h>
int main ()
{
int i=0,sum=0,n;
printf("Enter n numbers:");
scanf("%d",&n);
do 
{
	sum+=i;
	
	printf("\nThe sum i numbers=%d",sum);
	i++;
}
	while (i<=n);


return 0;
}

