/*

NAME - SHAH KRISH J.
PROGRAM OF 2D ARRAYS 

---------------------------------------------------------------------------------------------

QUESTION - 5 ) Design a macro which calculates interest based on required parameter. 

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#define I (p * r * n)/100.00
int main()
{
   int p,r,n;
   clrscr();
   
   printf("ENTER PRINCIPLE : ");
   scanf("%d",&p);
   printf("\nENTER RATE OF INTREST : ");
   scanf("%d",&r);
   printf("\nENTER TIME PERIOD : ");
   scanf("%d",&n);

   printf("\nINTREST IS : %0.2f",I);
   getch();
   return 0;
}