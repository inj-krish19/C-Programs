/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
-------------------------------------------------------------------------------
QUESTION - 39)	Find whether a given year is leap year or not
----------------------------------------------------------------------------------CODE*/
#include<stdio.h>
#include<conio.h>
main()
{
 int n;
 clrscr();
 printf("ENTER YEAR:");
 scanf("%d",&n);
 if(n%400==0)
 {
  printf("THIS IS LEAP YEAR");
 }
 else
 {
  if(n%4==0)
 {
   printf("THIS IS LEAP YEAR");
  }
  else
  {
  printf("THIS IS NOT LEAP YEAR");
  }


}
getch();
return 0;
}
-------------------------------------------------------------------------------
Output : 
ENTER YEAR :2015
THIS IS NOT LEAP YEAR.
------------------------------------------------------------------------------   */