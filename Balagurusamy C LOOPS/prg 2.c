/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOPS

---------------------------------------------------------------------------------------------

QUESTION - 2 ) Write first ten terms of Fibonacci series.

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    int t1=0,t2=1;
    int nxtterm=t1+t2;
    clrscr();
    
    printf("Fibonacci Series is : \n%d\n%d",t1,t2);
    
    for(i=3;i<=10;++i){
        printf("\n%d",nxtterm);
        t1=t2;
        t2=nxtterm;
        nxtterm=t1+t2;
    }
    
    getch();
    return 0;
}