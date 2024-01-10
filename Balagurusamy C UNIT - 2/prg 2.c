#include<stdio.h>
#include<conio.h>
int main()
{
    float a;
    int b;
    clrscr();
    printf("Enter any price in Rupees:");
    scanf("%f",&a);
    b=a*100;
    printf("Your entered values price is %d paises",b);
    getch();
    return 0;
}