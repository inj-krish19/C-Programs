/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
-------------------------------------------------------------------------------

QUESTION -9)	Write a program to find perimeter of rectangle.

------------------------------------------------------------------------------
CODE    */
#include<stdio.h>
#include<conio.h>
main()
{
    float l,b,per;
    clrscr();
    printf("Enter Length :");
    scanf("%f",&l);
    printf("Enter Width :");
    scanf("%f",&b);
    per=(l+b)*2;
    printf("Perimeter of Rectangle Is :%f ",per);
    getch();
    return 0;
}
/*
-------------------------------------------------------------------------------
Output : 
Enter Length :6
Enter Width :8
Perimeter of Rectangle Is :28.000000
------------------------------------------------------------------------------   */