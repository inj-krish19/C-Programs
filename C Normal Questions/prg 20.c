/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
-------------------------------------------------------------------------------
QUESTION - 20)	 Accept two numbers from user. Also accept the operation to be performed:
1. Addition
2. Subtraction
3. Multiplication
4. Division
--------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c,ch;
 clrscr();
 printf("ENTER FIRST NUMBER:");
 scanf("%d",&a);
 printf("ENTER SECOND NUMBER:");
 scanf("%d",&b);
 printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for divison\n");
 printf("ENTER CHOICE:");
 scanf("%d",&ch);
 if(ch==1)
 {
  c=a+b;
  printf("ADDITION OF TWO NUMBER IS: %d",c);
 }
 else if(ch==2)
 {
  c=a-b;
  printf("SUBTRACTION OF TWO NUMBER IS: %d",c);
 }
 else if(ch==3)
 {
  c=a*b;
  printf("MULTIPLICATION OF TWO NUMBER IS: %d",c);
 }
 else if(ch==4)
 {
  c=a/b;
  printf("DIVISON OF TWO NUMBER IS: %d",c);
 }
  else
  {
   printf("ENTER VALUE IN 1 to 4");
  }
  getch();
  return 0;
}
-------------------------------------------------------------------------------
Output : 
ENTER FIRST NUMBER:6
ENTER SECOND NUMBER:4
1 for addition
2 for subtraction
3 for multiplication
4 for divison

ENTER CHOICE:2
SUBTRACTION OF TWO NUMBER IS:2
------------------------------------------------------------------------------   */