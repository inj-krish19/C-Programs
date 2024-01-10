/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------

QUESTION -34)	Write a program to calculate electricity bill. 
a.	If units >500 charge 1rs for each unit.
b.	If  500>units >300 charge 0.9rs for each unit
c.	If 300>units >100 charge 0.7rs for each unit
If units <100 charge rs for each unit


----------------------------------------------------------------------------------------------------------------------------------
CODE*/
#include<stdio.h>
#include<conio.h>
main()
{
 float u,sum;
 clrscr();
 printf("Enter units");
 scanf("%f",&u);
 if(u>500)
 {
	sum=u*1;
 }
 else if(u<500 && u>300)
 {
	sum=u*0.9;
 }
 else if(u<300 && u>100)
 {
	sum=u*0.7;
 }
 else if(u<100)
 {
	sum=u*0;
 }
 printf("Bill Is :%f",sum);
 getch();
 }


/*-------------------------------------------
Output :

Enter units :550
Bill Is :550


--------------------------------------*/












-----
