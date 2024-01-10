/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOPS

---------------------------------------------------------------------------------------------

QUESTION - 1) For a given value of x find x^7-2x^3+x-1

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

main()
{
    int n,a=1,i,b=1;
    long double c;
    clrscr();
    
    printf("Enter the number of X :");
    scanf("%d",&x);
    
    for(i=0;i<7;i++){
        a=a*x;
    }

    for(i=0;i<3;i++){
        b=b*x;
    }

    c=a-(2*b)+n-1;
    printf("ANSWER IS : %ld\n",c);

    getch();
    return 0;
}