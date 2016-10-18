/*
 Student Name:Sudip Kuikel
 * Subject: Programming fundamentals
 * Roll:
 * lab no:
 * Program:Print your name
 * date:17th oct 2016
 */
#include<stdio.h>

int main()
{
float x,y,add,sub,mul,div,s;
printf("Enter value of X:");
scanf("%f",&x);
printf("Enter value of Y:");
scanf("%f",&y);
add=x+y;
printf("\n \t %f + %f =%f",x,y,add);
sub=x-y;
printf("\n \t %f - %f =%f",x,y,sub);
mul=x*y;
printf("\n \t%f * %f =%f",x,y,mul);
div=x/y;
printf("\n \t %f / %f =%f",x,y,div);
s=y%x;
printf("\n \t %f %% %f=%f",x,y,s);
return 0;
}



