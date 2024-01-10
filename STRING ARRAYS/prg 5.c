
/*NAME - SHAH KRISH J . 
ROLL NP . - 47
SUBJECT - FOP 
COURSE - COMPUTER SCIENCE
SEM - I
ASSIGNMENT OF STRING ARRAY
---------------------------------------------------------------------------------------------
QUESTION - 5)  Write a program to reverse a given string.
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int x[15],y[15];
    clrscr();
    printf("Enter String:");
    gets(x[15]);
    y=strrev(x);
    printf("REVERSED STRING IS :%s",y);
    getch();
    return 0;
}

/*
OUTPUT :
Enter String:KRISH
REVERSED STRING IS :HSIRK

*/