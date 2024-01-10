/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
-------------------------------------------------------------------------------

QUESTION -6)	Write a program to find area of triangle.

------------------------------------------------------------------------------
CODE    */

#include<stdio.h>
#include<conio.h>
#include<math.h>
main ()
{
    int a,b,c;
    float s,ar,area;
    clrscr();
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("\nEnter value of b :");
    scanf("%d",&b);
    printf("\nEnter value of c :");
    scanf("%d",&c);
    s=(a+b+c)/2;
    ar=(s*(s-a)*(s-b)*(s-c));
    area=sqrt(ar);
    printf("Parameter is :%f",s);
    printf("\nArea of Triangel : %f",area);
    getch();
    return 0;
}
/*
-------------------------------------------------------------------------------
Output : 
Enter value of a :5
Enter value of b :7
Enter value of c :10
Parmeter is :11.000000
Area of Triangel :16.268068
------------------------------------------------------------------------------   */