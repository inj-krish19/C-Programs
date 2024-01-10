/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------

QUESTION -30)	Accept one number from the user.  
1	for circle
2	for rectangle
3	3 for triangle
Calculate the parameter and area according to the choice of the user.


----------------------------------------------------------------------------------------------------------------------------------
CODE */


#include<stdio.h>
#include<conio.h>
main()
{
float no,a,r,pi,l,b,ar,per;
clrscr();
  printf("Press 1 for circle");
  printf("\nPress 2 for triangle");
  printf("\nPress 3 and anything for rectangle");
printf("Put Down Choice :");
  scanf("%f",&no);
     if(no==1)
  {
     printf("Enter the value of radious :");
     scanf("%f",&r);
     pi=3.14;
     ar=pi*r*r;
     per=2*pi*r;
     printf("\nArea of circle :%f",ar);
     printf("\nPerimeter of circle :%f",per);
  }
  else if (no==2)
  {
  printf("Enter the value of side1 :");
  scanf("%f",&a);
  printf("Enter the value of side2 :");
  scanf("%f",&r);
  ar=0.5*a*r;
  per=2*a*r;
  printf("\nArea of triangle=%f",ar);
  printf("\nPerimeter of triangle=%f",per);
  }
  else
  {
  printf("enter value of l :");
  scanf("%f",&a);
  printf("Enter value of b :");
  scanf("%f",&r);
  ar=l*b;
  per=2*(a+r);
    printf("\nArea of rectangle :%f",ar);
    printf("\nPerimeter of rectangle :%f",per);

  }

getch();
return 0;
}

/*-------------------------------------------
  Output :

Press 1 for circle
Press 2 for triangle
Press 3 and anything for rectangle..
Put Down Choice :6

Enter value of l :20
Enter value of b :10

area of circle=200.000000
perimeter of circle=60.000000
-------------------------------------------*/


