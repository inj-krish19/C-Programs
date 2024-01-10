/*

NAME - SHAH KRISH J . 
PROGRAM OF LOOPS

---------------------------------------------------------------------------------------------

QUESTION - 11.5) DISPLAY PATTERN :
  1
 121
12321
 

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
    int n,i,j,k;
    clrscr();
    printf("Enter Range : ");
    scanf("%d",&n);

    for (i=1;i<n;i++){
        for (j=n-1;j>=i;ij--){
            printf("  "); 
        }
        for (k=i-1;k>=-(i-1);ij--){
            printf("%d",i-abs(k)); 
        }
        printf("\n");
    }
    getch();
    return 0;
}