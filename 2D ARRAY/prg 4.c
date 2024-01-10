/*

NAME - SHAH KRISH J.
PROGRAM OF 2D ARRAYS 

---------------------------------------------------------------------------------------------

QUESTION - 4 ) Design a macro which calculates area of a circle.

---------------------------------------------------------------------------------------------*/

#include <stdio.h>
#define pie 3.14
#define area   pie * rad * rad
int main()
{
   int rad;
   clrscr();
   printf("The radius of the circle is : ");
   scanf("%d",&rad);
   printf("\nThe area of the given circle is : %f", area);
   getch();
   return 0;
}