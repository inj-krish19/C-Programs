/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 3.)	Write a program to search a particular word in an existing file
 			and display the no. of occurrences and the position of first occurrence 
			 of that word.If the word is not found display the appropriate message. 
*/
#include<stdio.h>
main()
{
	FILE *fp;
	char str[50],k;
	int i,a=1,el=0,b=0,count=0;
	fp = fopen("krish1.txt","r");
	printf("\nTHIS PROGRAM IS CASE SENSITIVE !!!!\n\n\n\n\n\n\n");
	for(i=0;i<50;i++)
	{
		fscanf(fp,"%c",&str[i]);
	}
	printf("%s",str);
	printf("\n\nWrite A Character That You Want To Seach : ");
	scanf("%c",&k);
	getchar();
	for(i=0;i<50;i++)
	{
			if(k == str[i] && b == 0)
			{
				printf("\n\nCharacter At Position %d",i+1);
				b++;
			}
			else
			{
				el++;
			}
			if(k == str[i])
			{
				count++;
			}
	}
	if(el != i)
	{
		printf("\n\nTotal Count Of %c is %d",k,count);	
	}
	if(el == i)
	{
		printf("\n\nAppropriate Message !");
	}
}
/*

OUTPUT :


-------------------------------------------------------------------

THIS PROGRAM IS CASE SENSITIVE !!!!






MY NAME IS KRISH.
MY FRIEND NAME IS MOHIT J.

Write A Character That You Want To Seach : K


Character At Position 12

Total Count Of K is 1

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FILE :

MY NAME IS KRISH.
MY FRIEND NAME IS MOHIT J.

-------------------------------------------------------------------
*/