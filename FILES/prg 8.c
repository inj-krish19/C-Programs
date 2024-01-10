/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 8.)	Write a program to remove all the 
			blank lines from a given file. 


*/
#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;
	int i,count=0,length;
	int ar[20];
	char str[200];
	fp = fopen("krish3.txt","r");
	printf("----------------------------------CASE SENSITIVE----------------------------------\n\n\n\nFile Content is : \n\n\n");
	for(i=0;i<155;i++)
	{
		fscanf(fp,"%c",&str[i]);
	}
	fclose(fp);
	length = strlen(str);
	for(i=0;i<length;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n\nBLANK LINE OVERS IN FILE\n");
	fp = fopen("krish3.txt","w");
	for(i=-1;i<length;i++)
	{
		/*this will remove all the new lines*/
		if(str[i+1] != '\n')
		{
			fprintf(fp,"%c",str[i+1]);
		}		
		/*in this if any charcter is not new line but the next charcter is new line then just give new line else not*/	
		if(str[i] != '\n' && str[i+1] == '\n')
		{
			fprintf(fp,"\n");
		}
	}
	printf("\nAll the	blank lines are removed from a given file.");
	fclose(fp);
	
}
/*
-----------File BEFORE Updating--------------



HELLO THERE IS BLANK LINE 1



HELLO THERE IS BLANK LINE 2







HELLO THERE IS BLANK LINE 3

HELLO THERE IS BLANK LINE 4


HELLO THERE IS ABOVE LAST BLANK LINE 5.


-----------File AFTER Updating--------------

HELLO THERE IS BLANK LINE 1
HELLO THERE IS BLANK LINE 2
HELLO THERE IS BLANK LINE 3
HELLO THERE IS BLANK LINE 4
HELLO THERE IS ABOVE LAST BLANK LINE 5

-------------------------------------------------------------------


OUTPUT :

----------------------------------CASE SENSITIVE----------------------------------



File Content is :


HELLO THERE IS BLANK LINE 1



HELLO THERE IS BLANK LINE 2







HELLO THERE IS BLANK LINE 3

HELLO THERE IS BLANK LINE 4


HELLO THERE IS ABOVE LAST BLANK LINE 5.

BLANK LINE OVERS IN FILE

All the blank lines are removed from a given file.

----------------------------------------------------------------------------------------------*/