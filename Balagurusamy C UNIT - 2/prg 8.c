#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    int c;
    printf("Please Give Two Floating Values.\n\n\n");
    printf("Enter First Number:");
    scanf("%f",&a);
    printf("Enter Second Number:");
    scanf("%f",&b);
    c=a+b;
    printf("\n\nFirst Number Is %f\n\n",a);
    printf("Second Number Is %f\n\n",b);
    printf("Sum Of Both Number Is %d",c);
    return 0;
}