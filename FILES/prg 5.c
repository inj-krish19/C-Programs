/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 5.)	Write a program to read line by line from
 			a file and print all the repeated characters
  			on the screen along with their frequency. 
*/
#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;
	int i,j,count=0,length;
	char c,str[100000];
	fp = fopen("krish.txt","r");
	//fp = fopen("new.txt","r");
	for(i=0;((str[i] = getc(fp)) != EOF);i++)
	{
	//	fscanf(fp,"%c",&str[i]);
	}
	fclose(fp);
	length = i+1;
//	printf("Length : %d",length);
	for(i=0;i<length;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n\nFrequency : \n\n\n");
	for(i=65;i<=122;i++)
	{
		if(i >= 65 && i <=90 || i >= 97 && i <= 122)
		{
			count = 0;
			for(j=0;j<length;j++)
			{
				if(str[j] == i)
				{
					count++;	
				}
			}
			if(count > 0)
			{
			printf("%c : ",i);
			printf("%d",count);
			printf("\n");
			}
			if(i == 90)
			{
				i += 6;
			}
		}
	}
	
	
	for(i=65;i<=122;i++)
	{
		if(i >= 33 && i <=47 || i >= 58 && i <= 64 || i >= 91 && i <= 96 || i >= 123 && i <= 127 )
		{
			count = 0;
			for(j=0;j<length;j++)
			{
				if(str[j] == i)
				{
					count++;	
				}
			}
			if(count > 0)
			{
			printf("%c : ",i);
			printf("%d",count);
			printf("\n");
			}
		}
	}
}
/*

OUTPUT :

-------------------------------------------------------------------
MY NAME IS KRISH AND I AM STUDYING COURSE OF COMPUTER SCIENCE FROM DEPARTMENT OF COMPUTER SCIENCE

Frequency :


A : 4
C : 7
D : 3
E : 10
F : 3
G : 1
H : 1
I : 6
K : 1
M : 7
N : 6
O : 6
P : 3
R : 6
S : 6
T : 5
U : 4
Y : 2


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FILE :

MY NAME IS KRISH.
MY FRIEND NAME IS MOHIT J.

-------------------------------------------------------------------
*/