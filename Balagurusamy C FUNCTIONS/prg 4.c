/*
NAME - SHAH KRISH J . 
PROGRAM OF FUNCTIONS

---------------------------------------------------------------------------------------------

QUESTION - 4) Write recursive function to calculate factorial of a given number.

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdio.h>

int fact(int);

int main()
{
    int x,ans;
    clrscr();
    printf("Enter the number : ");
    scanf("%d",&x);
    ans=fact(x);
    printf("FACTORIAL IS : %d",ans);
    getch();
    return 0;
}

int fact(int n)
{
    int i,fax=1;
    for(i=x;i>=1;i--){
        fax=fax*i;
    }
    return (fax);
}