/*

NAME - SHAH KRISH J . 
PROGRAM OF FUNCTIONS

---------------------------------------------------------------------------------------------

QUESTION - 3)   Write a function to reverse a given number.

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void reversee(int);

int main()
{
    int n,x;
    clrscr();
    printf("\nEnter the number : ");
    scanf("%d",&n);
    x=rev(n);
    printf("REVERSED NUMBER IS : %d",x);
    getch();
    return 0;
}

void reversee(int n)
{
    flot rev,rema;
    while(n!=0){
        remi=n%10;
        n=n/10;
        rev=rem*10+n;
    }
}