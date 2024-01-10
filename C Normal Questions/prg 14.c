/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
------------------------------------------------------------------------
QUESTION - 14)	Take temperature in Fahrenheit and convert it into degree Celsius.
-----------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
float main()
{
 float C,F;
 clrscr();
 printf("ENTER THE VALUE OF FAHRENHIT:");
 scanf("%f",&F);
 C=(5*F/9)+32;
 printf("\nANSWER IN CELCIUS IS:%f",C);
 getch();
 return 0;
}

/*-------------------------------------------

Output :
ENTER THE VALUE OF FAHRENHIT:9
ANSWER IN CELCIUS IS:37
-------------------------------------------*/