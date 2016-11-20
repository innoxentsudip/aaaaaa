/* 
 Student Name:Sudip Kuikel
 Subject:Lab
 Lab no.:15
 Propgram:Menu based program to find area and perimeter of rectangle,area of trapezium.
 Date:20 Nov 2016
  */
 
#include<stdio.h>
//#include<conio.h>
int main ()
{
	int a,b,h,n,pm;

	float area;
    menu:
	printf(" **** Select a number:***********\n");
	printf(" *1. Area of rectangle.         *\n");
	printf(" *2. Perimeter of rectangle.    *\n");
	printf(" *3. Area of trapezium.         *\n");
	printf(" *4. Exit                       *\n");
	printf(" ********************************\n");

	scanf("%d",&n);

	switch (n)
	{
			case 1:
			
		printf("Program to find area of rectangle\n");
		printf("Enter length and breadth of rectangle: ");
		scanf("%d %d",&a,&b);
		area=a*b;
		printf("The area of rectangle is %f",area);
		printf("\n \n");
		printf(" \t  Welcome again \n \n");
		goto menu;
	
			case 2:
			
		printf("Program to find perimeter of rectangle\n");
		printf("Enter length and breadth of rectangle: ");
		scanf("%d %d",&a,&b);
		pm=2*(a+b);
		printf("The perimeter of rectangle is %d",pm);
		printf("\n \n");
		printf(" \t  Welcome again \n \n");
		goto menu;
		
	
			case 3:
			
		printf("Program to find area of trapezium\n");
		printf("Enter base1,base2 and height of trapezium:");
		scanf("%d %d %d",&a,&b,&h);
		area=0.5*(a+b)*h;
		printf("The area of trapezium is %f ",area);
		printf("\n \n");
		printf(" \t  Welcome again \n \n");
		
		
		goto menu;
		
		case 4:
		printf("Exit \n");
		printf("Thank you ");
		
		break;
		default:
		
		goto menu;
	
	}
		return 0;
}

