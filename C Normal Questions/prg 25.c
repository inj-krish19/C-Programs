/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
 

QUESTION -25)	Accept a number and check whether it is odd or even

---------------------------------------------------------------------------------------------------
   CODE*/
#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();

printf("Enter Number :");
scanf("%d",&a);

if(a%2==0)
{
	printf("\nNumber Is Even");
}
else
{
	printf("\nNumber Is Odd");
}
getch();
return 0;
}
/*-------------------------------------------
Output :


Enter Number :50

Number Is Even
-------------------------------------------*/