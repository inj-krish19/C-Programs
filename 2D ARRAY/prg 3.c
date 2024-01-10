/*

NAME - SHAH KRISH J.
PROGRAM OF 2D ARRAYS 

---------------------------------------------------------------------------------------------

QUESTION - 3 ) Design a macro which converts a temperature from Celsius to farehnite. 

---------------------------------------------------------------------------------------------*/

#include <stdio.h>
#define N 5
#define A  (N * 9 /5) + 32
main()
{
    //float a;
    clrscr();
    //a = N * 9.0 / 5.0 + 32;
    printf("Temperature in Fahrenheit : %0.2f",A);
    getch();
    return 0;
}