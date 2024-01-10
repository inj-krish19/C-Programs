/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------

QUESTION -36)	If the price of the product is between 500 and 1500 give 30% discount . Display the final amount to be paid.

----------------------------------------------------------------------------------------------------------------------------------
CODE*/
#include<stdio.h>
#include<conio.h>
main()
{
float a,d,total;
clrscr();

printf("Enter Amount:");
scanf("%f",&a);

if(a>500 && a<1500)
{
	d=a*0.3;
}
else
{
	d=a*0.00;
}
printf("Discount Is :%f",d);
total=a-d;
printf("Final Amount Is :%f",total);
getch();
return 0;
}

/*
-------------------------------------------
Output :
Enter Amount:1000
Discount Is :300.000000
Final Amount Is :700.000000
-------------------------------------------
*/
