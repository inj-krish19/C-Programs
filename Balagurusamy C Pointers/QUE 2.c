/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 SUBJECT - PROGRAM OF POINTERS
 
QUESTION - 2 )	Take an array of characters . 
				Pass the array to functionss
				( using pointers ) 
				do the following operations :

					i	)	Find The size of string
					ii	)	Frequency of a letter 
					iii	)	Reverse The String 
					iv	)	Convert Into Uppercase

*/
#include<stdio.h>
#include<string.h>
size(char *p)
{
	int i;
	for(i=0;i<*p;i++)
	{
		
		p++;
	}
	return(i);
}
frequency(char *p,int len)
{
	int i,x,y=0,j;
	int a= 5;
	char *q;
	for(i=0;i<len-y;i++)
	{
	q = p + 1  ;
		x = 1 ;
		printf("\n%c :",*p);
		for(j=0;j<len-1;j++)
		{
			if(*p == *q)
			{
				x++;
			    y++;
			}
			q++;
		}
	    printf("%d",x);	
		p++;
		a = a - y ;
	}
}
reverse(char *p,int len)
{
	char *q;
	int i=0;
	p = p + len - 1 ;
	while(i<len)
	{
		q = p;
		printf("%c",*q);
		q++;
		p--;
		i++;
	}
	*q = '\0';
	printf("\n%c",*q);
}
uppercase(char *p,int len)
{
	int i,a;
	char *q;
	for(i=0;i<len;i++)
	{
		if(*p >= 'a' && *p <= 'z')
		{
			*p = *p - 32 ;
			printf("%c",*p);
		}
		p++ ;
	}
	for(i=0;i<len;i++)
	{
		if(*p >= 'a' && *p >= 'z')
		{
			*p = *p - 32 ;
			printf("%c",*p);
		}
		p++ ;
	}
}
main()
{
	int x,a=0;
	char str1[20];
	printf("\nEnter A String :");
	gets(str1);
	puts(str1);
	x = size(str1);
	printf("\n\nSize Is %d",x);
	a = frequency(str1,x);
	printf("\n\n");
	printf("\nReverse String Is :");
	reverse(str1,x);
	printf("\nUppercase Of Given String Is :");
	uppercase(str1,x);
	printf("\n\n\n\n-------- END OF PROGRAM --------");
}
/*

OUTPUT :

TRY 1 :

Enter A String :krish
krish


Size Is 5
k :1
r :1
i :1
s :1
h :1


Reverse String Is :hsirk

Uppercase Of Given String Is :KRISH



-------- END OF PROGRAM --------

TRY 2 :

Enter A String :AJA
AJA


Size Is 3
A :2
J :1


Reverse String Is :AJA

Uppercase Of Given String Is : AJA



-------- END OF PROGRAM --------
--------------------------------									
*/
