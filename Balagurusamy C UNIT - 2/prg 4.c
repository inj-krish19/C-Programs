#include<stdio.h>
#include<conio.h>
float main()
{
float a,b,c;
clrscr();
printf("Enter First float number:");
scanf("%f",&a);
printf("Enter Second float number:");
scanf("%f",&b);
c=a/b;
printf("\n\n%f/%f=%f",a,b,c);
getch();
return 0;
}