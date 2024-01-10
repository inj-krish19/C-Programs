/*
NAME - SHAH KRISH J . 
PROGRAM OF FUNCTIONS

---------------------------------------------------------------------------------------------

QUESTION - 2) Accept a number n. Write functions to 
a.	Display n odd numbers
b.	Display n even numbers
c.	Sum of first n numbers
d.	First n multiples of 5.

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

void odddd(int);
void evennn(int);
int  summm(int);
void pro(int);

main()
{
    int n,ans,ans2;
    clrscr();
    printf("Enter number :");
    scanf("%d",&n);
    odddd(n);
    evennn(n);
    ans=summm(n);
    printf("\nSum of the number : %d",ans);
    printf("\n");
    pro(n);
    printf("\nProduct of the number : %d",ans2);
    getch();
    return 0;
}

void odddd(int n)
{
    int i;
    printf("Odd Numbers Are :");
    for(i=1;i<=n;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
    printf("\n");
}

void evennn(int n)
{
    int i;
    printf("Even Numbers Are :");
    for(i=0;i<=n;i++){
        if(i%2==0){		
            printf("%d",i);
        }
        printf("\n");
    }
}

int summm(int n)
{
    int tot,i,x;
    tot=0;
    printf("Enter %d Numbers:",n);
    for(i=0;i<=n;i++){
        scanf("%d",&x);
        tot=tot+x;
    }
    printf("\n");
    return (tot);
}

void pro(int n)
{
    int i,x,mul=1;
    printf("Enter %d Numbers:",n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        mul=mul*x;
        printf("%d\n",mul);
    }
}