#include<stdio.h>
#include<conio.h>
float main()
{
    float a,b,c,d,bill;
    clrscr();
    printf("Price of Rice is ₹16.75 and \nPrice of Sugar is ₹15.00\n");
    printf("\n\nEnter the quantity of Rice (In kg):");
    scanf("%f",&a);
    printf("Enter the quantity of Sugar (In kg):");
    scanf("%f",&b);
    printf("\n        BILL      \n");
    c=a*16.75;
    printf("\nYour Bill of Rice is %f\n",c);
    d=b*15.00;
    printf("Your Bill of Sugar is %f\n",d);
    bill=c+d;
    printf("\n\nYour Final bill is %f",bill);
    getch();
    return 0;
}                    