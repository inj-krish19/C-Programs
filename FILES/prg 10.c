/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 10.)	Write a program that will generate a data file containing the list of 
			customers and their corresponding telephone numbers. 
			Use a structure variable to store the name and telephone number of each customer. 
  
*/
#include<stdio.h>
main()
{
	FILE *fp;
	int i;
	char c;
	struct data {
		char name[7];
		long long int t_no;
	}kg[5];
	fp = fopen("data.txt","r");
	
	for(i=0;i<5;i++)
	{
		fscanf(fp,"%s\t%lld\n",&kg[i].name,&kg[i].t_no);
	}
	fclose(fp);
	
	for(i=0;i<5;i++)
	{
		printf("%s\t%lld\n",kg[i].name,kg[i].t_no);
	}
	//printf("Data Should be : \nKRISH	5645646810\nVISHAL	2314221223\nMOHIT	8784213233\nROHIT	1234567879\nPRINCE	1234547833");
}

/*

OUTPUT :
-----------------------------------------------------------------------------------------------------------------------------
KRISH   :5645646810
VISHAL  :2314221223
MOHIT   :8784213233
ROHIT   :1234567879
PRINCE  :1234547833

-----------------------------------------------------------------------------------------------------------------------------


FILE : 

KRISH   5645646810
VISHAL  2314221223
MOHIT   8784213233
ROHIT   1234567879
PRINCE  1234547833


-----------------------------------------------------------------------------------------------------------------------------

*/