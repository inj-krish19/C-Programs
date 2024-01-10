/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOP

---------------------------------------------------------------------------------------------

QUESTION - 8) Display Pascal’s Triangle
        1
      1   1 
    1   2   1 
  1   3   3   1
1   4   6   4   1 

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int rows,i,j,space,count=1;
    clrscr();
    printf("Enter the row for pascal triangle: ");
    scanf("%d",&rows);
    
    for(i=0; i<rows; i++){
        for(space=1; space<=rows-i; space++)
        {
            printf("  ");
            for(j=0; j<=i; j++){
                if(j==0 || i==0){
                    count=1;
                } else{
                count=count*(i-j+1)/j;
                printf("%4d",count);
                }
            }
        printf("\n"); 
        }
    }
    getch();
    return 0;
}