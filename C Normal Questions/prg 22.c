/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
22)	 Accept two numbers and display bigger number
---------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    clrscr();

    printf("Enter number1 :");
    scanf("%d",&a);
    printf("enter number2 :");
    scanf("%d",&b);

    if(a<b)
        printf("%d Is Bigger Number.",b);
    else
        printf("%d Is Bigger Number",a);
    getch();
    return 0;
}


/*-------------------------------------------
    Output :
    
Enter number1 :5
Enter number2 :3

5 Is Bigger Number
-------------------------------------------*/