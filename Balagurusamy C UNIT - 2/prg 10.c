#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define PI 3.14
void main()
{
    /*Here We Are Using PI as a symbolic consant.Which is used by many times*/
    float a,b,c,d=PI,e;
    if(TRUE)
    {
        a=70;
        b=a*10;
        c=b-a;
        e=d*(a/10);
    }
    printf("\na=%f\nb=%f\nc=%f\nPI=%f\ne=%f",a,b,c,d,e);
    getch();
}