/*
Name  -  Shah Krish J.
Roll No. -  47
Batch - 1
Subject - FOP
Assignment - 1
Question from List of programs.docx
---------------------------------------------------------------------------------------------------

QUESTION -38)	Accept three numbers find the minimum and maximum.

----------------------------------------------------------------------------------------------------------------------------------


CODE*/#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("Enter Three Numbers :");
scanf("%d %d %d\n",&a,&b,&c);
if(a>b && a>c)
{
	printf("Biggest number is :%d",a);
	if(b<c)
	{
		printf("Smallest number is :%d",b);
	}
	else
	{
		printf("Smallest number is :%d",c);
	}
}
else if(b>c && b>a)
{
	printf("Biggest number is :%d",b);
	if(c<a)
	{
		printf("Smallest number is :%d",c);
	}
	else
	{
		printf("Smallest number is :%d",a);
	}
}
else if(c>a && c>b)
{
	printf("Biggest number is :%d",c);
	if(a<b)
	{
		printf("Smallest number is :%d",a);
	}
	else
	{
		printf("smallest number is..%d",b);
	}
}
getch();
return 0;
}


/*
-------------------------------------------
Output :

Enter Three Numbers :15 30 45

Biggest number is :45
Smallest number is :15
-------------------------------------------
*/