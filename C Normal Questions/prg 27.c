/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
 
QUESTION -27)	Accept a number check whether it is multiple of 6.


---------------------------------------------------------------------------------------------------
   CODE*/
#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();

printf("Enter number: ");
scanf("%d",&a);

if(a%6==0)
printf("\nNumber is multiple of 6");
else
printf("\nNumber is not multiple of 6");
getch();
}



/*-------------------------------------------
Output :
Enter number :30

Number is multiple of 6
-------------------------------------------*/