/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 1.)	Write a program to read a line from file and 
			print alternate characters in the output file. 
			Display appropriate message for file I/O errors.
*/
#include<stdio.h>
int main()
{
	FILE *kg;
	int i,j; 
	kg = fopen("krish.txt","r");
	char str[100];
	char copy[50];
	for(i=0;i<100;i++)
	{
		fscanf(kg,"%c",&str[i]);
	}
	fclose(kg);
	j=0;
	for(i=0;i<100;i=i+2)
	{
		printf("%c",str[i]);
		printf(" ");
		j++;
	}
	printf("\n\nNo Error Generated.\n\n\nAlternate Characters Has Printed In Terminal.");
	return 0;
}
/*
----------------------------------------------------------------------------------------------------------------------------
OUTPUT : 

M   A E I   R S   N     M S U Y N   O R E O   O P T R S I N E F O   E A T E T O   O P T R S I N E 

No Error Generated.


Alternate Characters Has Printed In Terminal.
--------------------------------

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FILE :

MY NAME IS KRISH AND I AM STUDYING COURSE OF COMPUTER SCIENCE FROM DEPARTMENT OF COMPUTER SCIENCE


----------------------------------------------------------------------------------------------------------------------------
*/