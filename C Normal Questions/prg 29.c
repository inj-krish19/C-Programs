/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------
 
QUESTION -29)	Accept two numbers from the user. Multiply the smaller number by5. And bigger number by 10. Add these two numbers.


---------------------------------------------------------------------------------------------------
   CODE*/
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,tot;
clrscr();

printf("Enter Two Numbers :");
scanf("%d %d",&a ,&b);

if(a<b)
 tot=(a*5)+(b*10);
else
 tot=(a*10)+(b*5);
printf("\nAnswer is :%d",tot);
getch();
return 0;
}

output:-

-------------------------------------------
Enter Two Numbers :15 10

Answer is :200
-------------------------------------------