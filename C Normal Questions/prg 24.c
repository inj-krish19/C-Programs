/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
  CODE */

QUESTION -24)	 Accept age of a student and display whether he/she is eligible for voting

---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
main()
{
    int age;
    clrscr();

    printf("Enter Your Age :");
    scanf("%d",&age);

    if(age<18)
        printf("You Are Not Eligible To Voting");
    else
        printf("You Are Eligable To Voting");
    getch();
    return 0;
}
/*-------------------------------------------
Enter Your Age :19

You Are Eligable To Voting
 -------------------------------------------*/