/*
Name  -  Shah Krish J.

Roll No. -  47

Batch - 1

Subject - FOP

Assignment - 1

Question from List of programs.docx

-------------------------------------------------------------------------------



QUESTION -4)	Write a program to find area of circle.



------------------------------------------------------------------------------

CODE    */


#include<stdio.h>

#include<conio.h>

#define PI 3.14

main()

{
    
float r,area;

clrscr();
    
printf("Enter the radius :");
    
scanf("%f",&r);
    
area=PI*r*r;
    
printf("\nArea of Circle is :%f",area);
    
getch();
    
return 0;

}

/*
-------------------------------------------------------------------------------


Output : 


Enter the radius :10

Area of Circle is 314.000000



------------------------------------------------------------------------------   */