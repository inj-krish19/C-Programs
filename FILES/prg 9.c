/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 9.)	Write a program a program to remove 
			all the comments from a   C file.  
*/
#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;
	int i,x;
	char str[753],ch;
	fp = fopen("MINIMUM.c","r");
	for(i=0;(str[i] = fgetc(fp)) != EOF;i++)
	{
		//printf("%c",str[i]);
	}
	fclose(fp);
	x = i;
//	printf("\n\n\n%d",x);
	fp = fopen("MINIMUM.c","w+");
	for(i=0;i<x;i++)
	{
		if(str[i] == 47)
		{
			if(str[i+1] == 42 || str[i+1] == 47 )
			{
				i+=2;
			}
		}
		if(str[i] == 42 && str[i+1] == 47)
		{
			i+=2;
		}
		fprintf(fp,"%c",str[i]);
	}
	printf("\n\nComments From C File Removed Successfully\n");
}

/*

OUTPUT :
-----------------------------------------------------------------------------------------

Comments From C File Removed Successfully

-----------------------------------------------------------------------------------------

C FILE BEFORE :

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	//clrscr();
/*	printf("Enter Value Of a:");
	scanf("%d",&a);
*/	//printf("Enter Value Of b:");
	/*scanf("%d",&b);
	printf*/		//("Enter Value Of c:");
	/*scanf("%d",&c);*//*(
	if(a>b && a>c)
	{
		if(b>c)
		{
			printf("Max is %d\n",a);
			printf("Min is %d\n",c);
		 }
		 else
		 {
			printf("Max is %d\n",a);
			printf("Min is %d\n",b);
		 }

	 }
	 else if(b>c && b>a)
	 {
		if(c>a)
		{
			printf("Max is %d\n",b);
			printf("Min is %d\n",a);
		}
		else
		{
			printf("Max is %d\n",b);
			printf("Min is %d\n",c);
		}
	 }
	 else
	 {
		if(a>b)
		{
			printf("Max is %d\n",c);
			printf("Min is %d\n",b);
		}
		else
		{
			printf("Max is %d\n",c);
			printf("Min is %d\n",a);
		}
	 }
	 getch();
}


********************************************************************************************

AFTER PROCESS : 

#include<stdio.h>
#include<conio.h>
void main()
{
        int a,b,c;
        clrscr();
        printf("Enter Value Of a:");
        scanf("%d",&a);
        printf("Enter Value Of b:");
        scanf("%d",&b);
        printf          ("Enter Value Of c:");
        scanf("%d",&c);
        if(a>b && a>c)
        {
                if(b>c)
                {
                        printf("Max is %d\n",a);
                        printf("Min is %d\n",c);
                 }
                 else
                 {
                        printf("Max is %d\n",a);
                        printf("Min is %d\n",b);
                 }

         }
         else if(b>c && b>a)
         {
                if(c>a)
                {
                        printf("Max is %d\n",b);
                        printf("Min is %d\n",a);
                }
                else
                {
                        printf("Max is %d\n",b);
                        printf("Min is %d\n",c);
                }
         }
         else
         {
                if(a>b)
                {
                        printf("Max is %d\n",c);
                        printf("Min is %d\n",b);
                }
                else
                {
                        printf("Max is %d\n",c);
                        printf("Min is %d\n",a);
                }
         }
         getch();
}

-----------------------------------------------------------------------------------------

*/