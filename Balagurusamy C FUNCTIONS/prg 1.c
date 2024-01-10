/*

NAME-SHAH KRISH J.
PROGRAM OF FUNCTIONS

----------------------------------------------------------------------

QUESTION - 1) Write a function to covert temperature in Celsius into Fahrenheit.

--------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

float change(float F)
{
    clrscr();
    printf("ENTER THE VALUE OF CELCIUS:");
    scanf("%f",&C);
    F=(1.8*C)+32;
    return (F);
}

float main()
{
    float C,F;
    clrscr();
    change(float F);
    printf("ANSWER IN FAHRENHIT IS:%f",F);
    getch();
    return 0;
}