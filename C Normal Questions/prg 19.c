/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
QUESTION - 19)	 Accept marks of five subjects for a student. Display whether the student is pass or fail
-------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c,d,e,total;
 clrscr();
 printf("ENTER MARKS OUT OF 100\n\n\n");
 printf("ENTER MARKS OF FOM:");
 scanf("%d",&a);
 printf("ENTER MARKS OF FCO:");
 scanf("%d",&b);
 printf("ENTER MARKS OF FICS:");
 scanf("%d",&c);
 printf("ENTER MARKS OF FOP:");
 scanf("%d",&d);
 printf("ENTER MARKS OF SL:");
 scanf("%d",&e);
 total=a+b+c+d+e;
 if(a>33 && b>33 && c>33 && d>33 && e>33)
 {
  printf("YOU ARE PASS YOUR TOTAL IS: %d",total);
 }
 else
 {
 printf("YOU ARE FAIL. AND YOUR TOTAL IS: %d",total);
 }
 getch();
 return 0;
}

/*-------------------------------------------------------------------------------
Output : 

ENTER MARKS OUT OF 100



ENTER MARKS OF FOM:50
ENTER MARKS OF FCO:60
ENTER MARKS OF FICS:40
ENTER MARKS OF FOP:30
ENTER MARKS OF SL:70
YOU ARE PASS YOUR TOTAL IS:250
------------------------------------------------------------------------------   */