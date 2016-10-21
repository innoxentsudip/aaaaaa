/*
Student name:Sudip Kuikel
Subject:
Roll no.:
Lab no.:
Program:To find out largest number using nested if else.
Date:2016-10-20
*/
#include<stdio.h>


 int main()
 {
int a,b,c;
printf("Enter three numbers A B C");
scanf("%d   %d   %d",&a,&b,&c);
if (a==b){
	if (a>c){
		printf("%d is greatest",a);
}
	else if (b==c){
		if (b>a)
			printf("%d  is greatest",b);
}
else if (c==a){
	if (c>b)
		printf("%d is greatest",c);
}
}
else if (a>b&&a>c)
printf("%d is greater",a);
else if (b>c&&b>a)
printf("%d is greater",b);
else if (c>a&&c>b)
printf("%d is greater",c);
return 0;
}
	


