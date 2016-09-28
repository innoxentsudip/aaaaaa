#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float a,b,c,d,e,f,r1,r2;
	printf("\nEnter varaiable of x^2: ");
	scanf("%f",&a);
	printf("\nEnter varaiable of x^1: ");
	scanf("%f",&b);
	printf("\nEnter varaiable of x^0: ");
	scanf("%f",&c);
	d=pow(b,2)-4*a*c;
	printf("discriminant %f",d);
	e=-b+pow(d,0.5);
	r1=e/2*a;
	printf("\nfirst root: %f",r1);
	f=-b-pow(d,0.5);
	r2=f/2*a;
	printf("\nSecond root: %f",r2);
	getch();
}
