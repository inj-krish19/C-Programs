/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------

QUESTION -37)	Write a program to give grades as  per the marks.


----------------------------------------------------------------------------------------------------------------------------------

CODE*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter Marks:");
scanf("%d",&a);
{
if(a>90)
 {
 printf("A grade");
 }
 else if(a>80)
 {
 printf("B grade");
 }
 else if(a>70)
 {
 printf("C grade");
 }
 else if(a>60)
 {
 printf("D grade");
 }
 else if(a>50)
 {
 printf("E grade");
 }
 else if(a<35)
 {
 printf("Student is Fail");
 }
}
getch();
return 0;
}


/*
-------------------------------------------
Enter Marks:84
B grade
-------------------------------------------
*/