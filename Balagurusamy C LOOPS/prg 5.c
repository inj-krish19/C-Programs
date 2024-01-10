/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOPS

---------------------------------------------------------------------------------------------

QUESTION - 5 ) For a given value of x find e^x, sin(x) and cos(x) upto 5 terms.

---------------------------------------------------------------------------------------------*/

#include <stdio.h>

float exponential(int n, float x)
{
    float sum = 1.0f;
    for (int i = y - 1; i > 0; --i )
    sum = 1 + x * sum / i;
    return (sum);
}

int main()
{
    int y = 10;
    float x;
    int i, j, n, fact, sign =  - 1;
    float x, p, sum = 0;
    clrscr();
    
    printf("Enter Value Of X: ");
    scanf("%d",&x);
    printf("\ne^x = %f", exponential(y, x));//TERM - 1//
    
    x=x*x;
    
    printf("\nSquare Of X is :%d",x);//TERM - 2//
    printf("\nEnter the value of n : ");
    scanf("%d", &n);
  
    for (i = 1; i <= n; i += 2){
        p = 1;
        fact = 1;
        for (j = 1; j <= i; j++){
            p = p * x;
            fact = fact * j;
        }
        sign =  - 1 * sign;
        sum += sign * p / fact;
        printf("\nSIN OF X IS : %d",sum);//TERM - 3 //
        x= 1/ x ; 
        printf("\n1 BY X IS %d",x(float));// TERM - 4 //
        printf("\nDerivation Of X is 0"); //TERM - 5 //
        printf("\nIntegration Of X is :%dX",x)//TERM - 6 //
    }

    getch();
    return 0;
}