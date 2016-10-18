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
int x,y,add,sub,mul,div,s,c;
printf("Enter value of X:");
scanf("%d",&x);
printf("Enter value of Y:");
scanf("%d",&y);
add=x+y;
printf("\n \t %d + %d =%d",x,y,add);
sub=x-y;
printf("\n \t %d - %d =%d",x,y,sub);
mul=x*y;
printf("\n \t%d * %d =%d",x,y,mul);
div=x/y;
printf("\n \t %d / %d =%d",x,y,div);
s=x%y;
printf("\n \t %d %% %d=%d",x,y,s);
printf("\nEnter the C integer value:\n");
scanf("%d",&c);
printf("\nOriginal value of c is %d",c);
printf("\nThe prefix increment of c++ is %d\n",c++);
printf("\n The postfix increment of ++c is %d\n",++c);

printf("\nOriginal value of c is %d",c);
printf("\nThe prefix increment of c-- is %d\n",c--);
printf("\nThe postfix increment of --c is %d\n",--c);

return 0;
}



