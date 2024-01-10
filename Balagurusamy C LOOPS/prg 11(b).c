/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOP

---------------------------------------------------------------------------------------------

QUESTION - 11.2) DISPLAY FOLLOWING PATTERNS :
    * 
   * * 
  * * * 
 * * * *
 
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int n, s, x, y;
    clrscr();
    printf("Enter number of rows to show star pattern: ");
    scanf("%d",&n);

    for(x = 0; x <= n; x++) {
        for(s = n; s > x; s--){
            printf(" ");
        }
        
        for(y = 0; y < x; y++){
            printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}