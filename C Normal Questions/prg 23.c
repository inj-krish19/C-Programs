/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
  CODE 

QUESTION -23)	 Accept three numbers, display the smallest of the three


---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();

    printf("Enter number1 :");
    scanf("%d",&a);

    printf("Enter number2 :");
    scanf("%d",&b);

    printf("Enter number3 :");
    scanf("%d",&c);

    if(a<b && a<c)
        printf("Smallest number is %d",a);
    else if(b<c && b<a)
        printf("Smallest number is %d",b);
    else if(c<a && c<b)
        printf("Smallest number is %d",c);
    getch();
    return 0;
}



/*-------------------------------------------
    Output :
    Enter number1 :5
    Enter number2 :4
    Enter number3 :6

    Smallest number is 4
    -------------------------------------------*/