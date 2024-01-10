/*

NAME - SHAH KRISH J.
PROGRAM OF 2D ARRAYS 

---------------------------------------------------------------------------------------------

QUESTION - 6 ) Take two numbers from the user and do the following operations on them.

a.Bitwise AND
b.Bitwise OR
c.Bitwise XOR
d.Shift first number to the left by 1 bit, 2 bits and 4 bits.  Display individual result.
e.Shift second number to the right by 2 bits and 3 bits.
f.Display bit wise complement of first number.

---------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{

    int a = 19, b = 29,i;
    clrscr();
    
    printf("\n|Q1|---------AND--------");
    printf("\nOutput : %d", a & b);
    
    printf("\n|Q2|---------OR----- ---");
    printf("\nOutput : %d", a | b);
    
    printf("\n|Q3|---------XOR--------");
    printf("\nOutput : %d", a ^ b);

    printf("\n|Q4|---------RIGHT SHIFT--------");
    for (i = 1; i <= 4; i*=2){
        printf("\nRight shift by %d: %d\n", i, a >> i);
    }
    printf("\n");
    
    printf("\n|Q5|---------LEFT SHIFT--------");
    for (i = 2; i < 4; ++i){
        printf("\nLeft shift by %d: %d\n", i, b << i);
    }
    
    printf("\n|Q6|---------BITWISE COMPLEMENT--------");
    printf("\nOutput : %d\n", ~a);

    getch();
    return 0;

}