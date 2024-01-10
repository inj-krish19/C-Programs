
/*
NAME - SHAH KRISH J . 
PROGRAM OF LOOPS

---------------------------------------------------------------------------------------------

QUESTION - 10) Print Floyd’s triangle
1
01
101
0101
10101

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k=0,x,y; 
    clrscr();
    printf("Enter Number :");
    scanf("%d",&y);
    
    for(i=0;i<y;i++){
        for(j=0;j<i;j++){
            if((i+j)%2==0){
                printf(" 0 ");
            }else{
                printf(" 1 ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}