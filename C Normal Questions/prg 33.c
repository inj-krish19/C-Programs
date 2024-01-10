/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
 
QUESTION -33)	Accept amount of item to be purchased and if the price>500 give 10% discount else give 5% discount. Display the total amount to be paid.


---------------------------------------------------------------------------------------------------
   CODE/*
#include<stdio.h>
#include<conio.h>
main()
{
float a,sum,total;
clrscr();

printf("Bill :");
scanf("%f",&a);

if(a>500)
{
	sum=a*0.1;
}
else
{
sum=a*0.05;
printf("Discount Is%f\n",sum);
}
total=a-sum;
printf("Final Amount to be Paid Is%f",total);
getch();
}

/*
-------------------------------------------
Output :

Bill :2000

Discount Is 200.000000
Final Amount to be paid Is :1800.000000
-------------------------------------------*/
