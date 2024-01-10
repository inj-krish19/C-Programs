/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
-------------------------------------------------------------------------------

QUESTION -12)	Print first 6 even integers.

------------------------------------------------------------------------------
CODE    */
#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    clrscr();
    printf("First 6 Even Number Are :\n");
    for(i=2; i<=12; i+=2)
    {
        printf("%d\n",i);
    }
    getch();
    return 0;
}/*
-------------------------------------------------------------------------------
Output : 
First 6 Even Number Are :
2
4
6
8
10
12

------------------------------------------------------------------------------   */