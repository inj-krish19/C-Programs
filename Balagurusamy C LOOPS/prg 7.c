/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOP

---------------------------------------------------------------------------------------------

QUESTION - 7) Display n terms of Harmonic series and their sum 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
main()
{
    float i,n,a=0;
    clrscr();

    printf("Enter the number to end seris:\n");
    scanf("%f",&n);
    
    for(i=0;i<n;i++) {
        a=1/i;
    }
    
    printf("\nThe ans is : %f",a);
    getch();
    return 0;
}       