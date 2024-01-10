/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
-------------------------------------------------------------------------------

QUESTION -8)	Write a program to find perimeter of circle.

------------------------------------------------------------------------------
CODE    */
#include<stdio.h>
#include<conio.h>
#define pi 3.14
main()
{
    float per,r;
    printf("Enter radius :");
    scanf("%f",&r);
    per=2*pi*r;
    printf("\nPerimiter of Circle Is: %f",per);
    getch();
    return 0;
}/*
-------------------------------------------------------------------------------
Output : 
Enter radius :10
Perimiter of Circle Is: 62.800000
------------------------------------------------------------------------------   */