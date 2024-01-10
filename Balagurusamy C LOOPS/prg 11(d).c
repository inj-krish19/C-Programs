/*NAME - SHAH KRISH J . 
ROLL NP . - 47
SUBJECT - FOP 
COURSE - COMPUTER SCIENCE
SEM - I
ASSIGNMENT OF LOOP
---------------------------------------------------------------------------------------------
QUESTION - 11.4)DISPLAY FOLLOWING PATTERN :
   1 
  2 3 
 4 5 6 
7 8 9 10
 4 5 6
  2 3
   1 
---------------------------------------------------------------------------------------------*/
#include <stdio.h>
int main()
{
    int i,j, c=1, n;
    clrscr();
    
    printf ("enter number of terms\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=i;j<=i;j++){
            printf("   ");
            for(j=1;j<=i;j++){ 
                printf("\t");
                printf("%d ",c);
                c++;
            }
        }  
        printf("\n");
    }
    c=c-i;
    n=n-1;
    
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("\t");
            printf("%d ",c);
            c--;
        }
        printf(" \n");
    }
    
    getch();
    return 0;
}