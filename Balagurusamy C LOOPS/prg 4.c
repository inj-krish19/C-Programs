/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOPS

---------------------------------------------------------------------------------------------

QUESTION - 4) Reverse a given number.

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
main()
{
    int n,rev=0,remi;
    clrscr();
    printf("Enter a number");
    scanf("%d",&n);

    while(n!=0){
        remi=n%10;
        rev=rev*10+remi;
        n=n/10;
    }

    printf("Reverse number is : %d",rev);
    getch();
    return 0;
}