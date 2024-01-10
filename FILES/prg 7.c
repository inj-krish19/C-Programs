/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 7.)	Write a function to accept a string from the keyboard 
			and remove all occurrences of that string from a given file. 

*/
#include<stdio.h>
#include<string.h>//**
true(int ar[5],char *x)
{
	int i;
	for(i=0;i<97;i++)
	{
		if(*(x+i) == ar[0] || *(x+i) == ar[1] || *(x+i) == ar[2] || *(x+i) == ar[3] || *(x+i) == ar[4] )
		{
			i++;
		}	
		printf("%c",*(x+i));
	}
}
main()
{
	FILE *fp;
	int i,j,count=0,ar[11];
	char str[100],c[10];
	char strs[17][10];
	fp = fopen("krish.txt","r");
	printf("----------------------------------CASE SENSITIVE----------------------------------\n\n\n\nFile Content is : \n\n\n");
	for(i=0;i<100;i++)
	{
		fscanf(fp,"%c",&str[i]);
	}
	fclose(fp);
	for(i=0;i<97;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	printf("\n\nEnter String That You Want To Compare :");
	gets(c);
	count = strlen(c);
	printf("\n");
	fp = fopen("krish.txt","r");
	for(i=0;i<17;i++)
	{
		fscanf(fp,"%s",strs[i]);
	}
	printf("\n");
	for(i=0;i<count;i++)
		ar[i] = c[i];
	printf("String With Out Those Characters Are :\n\n\n");
	true(ar,str);
	/* LOGIC WITHOUT FUNCTION
	for(i=0;i<97;i++)
	{
		if(str[i] == ar[0] || str[i] == ar[1] || str[i] == ar[2] || str[i] == ar[3] || str[i] == ar[4] )
		{
			i++;
		}	
		printf("%c",str[i]);
	}*/
}
/*

OUTPUT :

-------------------------------------------------------------------

File Content is :


MY NAME IS KRISH AND I AM STUDYING COURSE OF COMPUTER SCIENCE FROM DEPARTMENT OF COMPUTER SCIENCE


Enter String That You Want To Compare :COURSE


String With Out Those Characters Are :


MY NAME I KIH AND I AM TDYING ORE F OMPTE CIENE FOM DEPATMENT F OMPTE CIENE

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FILE :

MY NAME IS KRISH AND I AM STUDYING COURSE OF COMPUTER SCIENCE FROM DEPARTMENT OF COMPUTER SCIENCE

-------------------------------------------------------------------
*/