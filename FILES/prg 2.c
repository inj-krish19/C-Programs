/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 2.)     Write a program to copy the contents of one file 
   			  to another and also print the no. of lines in the first file. 
*/
#include<stdio.h>
main()
{
	FILE *fp,*kg;
	char str[50];
	int i,a=1;
	fp = fopen("krish1.txt","r");
	kg = fopen("krish2.txt","w");
	for(i=0;i<50;i++)
	{
		fscanf(fp,"%c",&str[i]);
		if(str[i] == '\n')
		{
			a++;
		}
	}
	printf("\n%s",str);
	for(i=0;i<50;i++)
	{
		fprintf(kg,"%c",str[i]);
	}
	fprintf(kg,"\n\nTotal Lines Are : %d",a);
}
/*

OUTPUT :

-------------------------------------------------------------------

MY NAME IS KRISH.
MY FRIEND NAME IS MOHIT J.
--------------------------------

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FILE 1 :

MY NAME IS KRISH.
MY FRIEND NAME IS MOHIT J.

-------------------------------------------------------------------

FILE 2:

MY NAME IS KRISH.
MY FRIEND NAME IS MOHIT J.      

Total Lines Are : 2

-------------------------------------------------------------------
*/