/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
-------------------------------------------------------------------------------

QUESTION -11)	Print first 5 odd numbers.

------------------------------------------------------------------------------
CODE    */
#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    clrscr();
    printf("First 5 Odd Numbers Are :\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n",2*i+1);
    }
    getch();
    return 0;
}
/*
-------------------------------------------------------------------------------
Output : 
First 5 Odd Numbers Are :
1
3
5
7
9

------------------------------------------------------------------------------   */