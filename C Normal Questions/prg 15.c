/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
------------------------------------------------------------------------
QUESTION - 15)	Print the following pattern.
*
**
***
-------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
main()
{
int i,a;
clrscr();
for(i=0;i<=3;i++)
{
for(a=1;a<=i;a++)
{
 printf("*");
}
printf("\n");
}
getch();
return 0;
}

/*-------------------------------------------

Output :
*
**
***
-------------------------------------------*/