/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
 
QUESTION -32)	Accept salary of an employee if salary>30,000 calculate tax as 5% else no tax. Display amount of tax to be paid.


---------------------------------------------------------------------------------------------------
   CODE/*
#include<stdio.h>
#include<conio.h>
main()
{
 float salary,tax;
 clrscr();

 printf("Enter Salary:");
 scanf("%f",&salary);

 if(salary>30000)
 {
 tax=salary*0.05;
 }
 else
 {
  tax=salary*0;
 }
 printf("\nTax is :%f",tax);
 getch();

 }
/*-------------------------------------------
Output :

Enter Salary :250000

Tax is 12500.000000
-------------------------------------------*/

