/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOPS

---------------------------------------------------------------------------------------------

QUESTION - 6 ) Write an interactive program which asks for a number and displays its factors.

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

main()
{
    int num,i;
    clrscr();
    printf("Enter a Number :");
    scanf("%d",&num);
    printf("FACTORS IS : ");
    
    for(i=1;i<=num;++i){
        if(num%i==0){
            printf("%d\t",i);
        }
    }
    
    getch();
    return 0;
}
