/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOPS

---------------------------------------------------------------------------------------------

QUESTION - 3 )Accept a number from the user and print the total number of digits that number has. 
(eg. If the input is 23453 the output should be 5)

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

main()
{
    int n,count=0;
    clrscr();
    
    printf("Enter the number : ");
    scanf("%d",&n);
    
    while(n!=0){
        n=n/10;
        count++;
    }
    
    printf("\n the number of digit is an intrger is : %d",count);
    getch();
    return 0;
} 