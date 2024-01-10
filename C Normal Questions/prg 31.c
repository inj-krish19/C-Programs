/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
 
QUESTION -31)	Accept a number X from the user. Calculate X^2 + 3x-1.


---------------------------------------------------------------------------------------------------
   CODE*/
#include<stdio.h>
#include<conio.h>
main()
{
int x,sq,tot;
clrscr();

printf("Enter Number :");
scanf("%d",&x);

sq=x*x;
tot=sq+3*x-1;
printf("\nTotal is :%d",tot);
getch();
return 0;
}
/*-------------------------------------------
  Output :

Enter Number :5

Total is :41
-------------------------------------------*/