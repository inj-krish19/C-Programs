/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 SUBJECT - PROGRAM OF POINTERS 
	
	QUESTION - 3 ) AND 4 )	Using Pointers To Merge Two Strings .

*/
#include<stdio.h>
#include<string.h>
merge(char *p,char *q,char *r)
{
	
  while(*p != '\0')
   {
		*r = *p;
		r++;
		p++;
   }
   
  while(*q != '\0')
  {
    *r = *q;
    r++ ;
    q++	 ;
  }
  *r = '\0';
}


main()
{
	char str1[20],str2[20],str3[40];
	printf("Enter 2 Strings to Merge Them : \n");
	gets(str1);
	gets(str2);
    merge(str1,str2,str3);
    
    printf("%s",str3);
}

/*

OUTPUT :

TRY 1 :


Enter 2 Strings to Merge Them :
KRISH
SHAH
KRISH SHAH
--------------------------------

*/
