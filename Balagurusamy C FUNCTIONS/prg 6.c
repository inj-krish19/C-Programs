/*
NAME - SHAH KRISH J . 
PROGRAM OF FUNCTIONS

---------------------------------------------------------------------------------------------

QUESTION - 6) Write a menu driven interactive program to find area of triangle, square, rectangle and circle.
 Use separate function for each shape. 
 Try to prepare a separate header file and include in your program

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include "krish.h"
#define PI 3.14

float c_area(float);
float t_area(float,float);
float r_area(float,float);

main()
{
	int ch,x;
	float R,area,H,B,L;
	clrscr();
	printf("---Menu Driven---\n---1.For Circle--\n---2.For Triangle-\n---3.For Rectangle\n---4.For Square");
	printf("Enter You Choice:");
	scanf("%d",&ch);
	
    switch(ch)
	{
		case 1:
		{
            printf("Enter Radius Of The Circle:");
            scanf("%f",&R);
            area=c_area(R);
            printf("The Area Of Circle is %8.2f",area);
            break;
		}
		case 2:
		{
            printf("Enter Height Of The Triangle:");
            scanf("%f",&H);
            printf("Enter Base Of The Triangle:");
            scanf("%f",&B);
            area=t_area(H,B);
            printf("The Area Of Triangle is %8.2f",area);
            break;
		}

		case 3:
		{
            printf("Enter Length Of The Rectangle:");
            scanf("%f",&L);
            printf("Enter Breadth Of The Rectangle:");
            scanf("%f",&B);
            area=r_area(L,B);
            printf("The Area Of Rectangle is %8.2f",area);
            break;
		}
		case 4:
		{
            printf("\nEnter Value Of X:");
            scanf("%d",&x)
            printf("\nArea Of Square Is : %f",area);
		}
		default:
			printf("Invalid Choice!!");
	}
	getch();
    return 0;
}

float c_area(float R)
{
	float area,pi=3.14;
	area=pi*R*R;
	return(area);
}

float t_area(float H,float B)
{
	float area;
	area=0.5*H*B;
	return(area);
}

float r_area(float L,float B)
{
	float area;
	area=L*B;
	return(area);
}

float s_area(float x)
{
	float area;
	area=x*x;
	return(area);
}