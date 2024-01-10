/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
-------------------------------------------------------------------------------

QUESTION -13)	Take 3 variables from user : (i) Principal (ii)Interest rate (iii) Tenure of the fixed amount . 
Calculate The simple interest.

------------------------------------------------------------------------------
CODE    */
#include<stdio.h>
#include<conio.h>
main()
{
    float p,r,n,i;
    clrscr();

    printf("Enter Principle :");
    scanf("%f",&p);

    printf("Enter Rate of Intrest :");
    scanf("%f",&r);

    printf("Enter Time Period :");
    scanf("%f",&n);

    i=(p*r*n)/100;
    printf("\nIntrest is :%f",i);
    getch();
    return 0;
}

/*-------------------------------------------

Output :

Enter Principle :1000
Enter Rate of Intrest Is :10
Enter Time Period :2

Intrest is : 200.000000
-------------------------------------------*/