/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------

QUESTION -35)	Write a program to calculate bonus amount as per the extra time.


----------------------------------------------------------------------------------------------------------------------
CODE*/

#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("Enter Extra work Hours :");
scanf("%d\n",&a);
{
	if(a>40)
	{
	printf("Bonus is 2500");
	}
	else if(a>30)
	{
	printf("Bonus is 2000");
	}
	else if(a>20)
	{
	printf("Bonus is 1800");
	}
	else if(a>10)
	{
	printf("Bonus is 1400");
	}
	else if(a<10)
	{
	printf("Bonus is 1200");
	}
}
getch();
return 0;
}


/*

-------------------------------------------
 Output :

Enter Extra work Hours :36

Bonus is 2000
-------------------------------------------
*/