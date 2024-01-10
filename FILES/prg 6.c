/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 6.)	Write a function to read a file and count the 
			no. of characters, spaces, newlines and 
			no. of words in a given text file. 

*/
#include<stdio.h>
main()
{
	FILE *fp;
	int i,j,count=0;
	char str[100],c[10];
	fp = fopen("krish.txt","r");
	printf("\nFile Content is : \n\n\n");
	for(i=0;i<100;i++)
	{
		fscanf(fp,"%c",&str[i]);
	}
	fclose(fp);
	for(i=0;i<100;i++)
	{
		printf("%c",str[i]);
	}
	for(i=0;i<100;i++)
	{	
		if(str[i] >= 65 && str[i] <=122)
		{
			if(122 >= str[i] && str[i] <= 97 || 90 >= str[i] && str[i] <= 65)
			{
				count++ ;
			}
		}
	}
	printf("\n\n");
	printf("\n\nThe Count Of Charcters Are : %d",count);
	count = 0;
	for(i=0;i<100;i++)
	{	
		if(str[i] == 32)
		{
				count++ ;
		}
	}
	printf("\n\nThe Count Of White Spaces Are : %d",count);
	count = 1;
	for(i=0;i<100;i++)
	{	
		if(str[i] == '\n')
		{
				count++ ;
		}
	}
	printf("\n\nThe Count Of Newlines Are : %d",count);
	/*white space comes only when where word ends*/
	count = 1;
	for(i=0;i<100;i++)
	{	
		if(str[i] == 32)
		{
				count++ ;
		}
	}
	printf("\n\nThe Count Of Words Are : %d",count);
}
/*

OUTPUT :

-------------------------------------------------------------------

File Content is :


MY NAME IS KRISH AND I AM STUDYING COURSE OF COMPUTER SCIENCE FROM DEPARTMENT OF COMPUTER SCIENCE



The Count Of Charcters Are : 81

The Count Of White Spaces Are : 16

The Count Of Newlines Are : 1

The Count Of Words Are : 17
--------------------------------

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FILE :

MY NAME IS KRISH AND I AM STUDYING COURSE OF COMPUTER SCIENCE FROM DEPARTMENT OF COMPUTER SCIENCE

-------------------------------------------------------------------
*/