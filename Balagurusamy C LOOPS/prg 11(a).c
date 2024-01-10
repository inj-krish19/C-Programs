/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOPS

---------------------------------------------------------------------------------------------

QUESTION - 11.1)	Display following patterns

0
11
222
3333

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,c;
    clrscr();
    printf("Enter the number : ");
    scanf("%d",&a);

    for(b=0;y<a;b++){
        for(c=0;c<a;c++){
            printf("%d",c);
        }
        printf("\n");
    }
    getch();
    return 0;
}