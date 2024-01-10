/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx=
---------------------------------------------------------------------------------------------------

QUESTION -28)	
Accept marks of student and category : (i) Sports (ii) CS.  Based on category give some bonus marks. Display total marks.


----------------------------------------------------------------------------------------------------------------------------------
CODE*/


#include<stdio.h>
#include<conio.h>
main()
{
	int mark,sum,choice;
	printf("Enter marks:");
	scanf("%d",&mark);
printf("1 for Sporsts\n2 for Cs");
	printf("(i)Sports\n");
	printf("(ii)Cs\n");

	printf("Choice your Category :");
	scanf("%d",&choice);

	if(choice==1)
	{
		sum=mark+6;
	}
	else
	{
		sum=mark+3;
	}
	printf("Total marks is :%d",sum);
	getch();
return 0;
}

/*-------------------------------------------
  Output :

Enter marks :80
1 for Sports
2 for Cs
(i)Sports
(ii)Cs
Choice Your Category :2

Total marks is :83
-------------------------------------------*/
