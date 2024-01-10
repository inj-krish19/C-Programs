#include<stdio.h>
#include<conio.h>
main()
{
    int x,y;
    short int z;
    /*X And Y Is Integer And Z Is Short Integer*/
    printf("Please Enter Values Of 6 Digits.\n\n\n");
    printf("Enter Value Of X:");
    scanf("%d",&x);
    printf("Enter Value of Y:");
    scanf("%d",&y);
    z=x+y;
    printf("\n\nValue Of X Is %d\n\n",x);
    printf("Value Of Y Is %d\n\n",y);
    printf("Sum Of X And Y Is Z And\nValue Of Z is %hd",z);
    /*All Tasks a to d done here*/
    getch();
    return 0;
}