/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 4.	The files DATA1 and DATA2 contain sorted list of integers.
			 Write a program to produce a third file DATA which holds a 
			 single sorted merged list of these two lists. 

*/
#include<stdio.h>
main()
{
	int ary[10],sort[10];
	int i,j,min = 999,temp,t;
	FILE *s1,*s2,*merge;
	s1 = fopen("sort1.txt","r");
	s2 = fopen("sort2.txt","r");
	for(i=0;i<10;i++)
	{
		if(i<5)
		{
			fscanf(s1,"%d\n",&ary[i]);
		}
		else
		{
			fscanf(s2,"%d\n",&ary[i]);
		}
	}
	for(i=0;i<10;i++)
	{
		printf("\nary[%d] : ",i);
		printf("%d",ary[i]);
	}
	for(i=0;i<10;i++)
	{
		min = 999;
		for(j=i;j<10;j++)
		{
			if(min > ary[j])
			{
				min = ary[j];
				t = j;
			}
		}
		ary[t] = ary[i];
		ary[i] = min ;
		min = ary[t];
	}
	merge = fopen("merge.txt","w");
	printf("\n\n\nThe Merged And Sorted Array Is : \n");
	for(i=0;i<10;i++)
	{
		printf("\nary[%d] : ",i);
		printf("%d\n",ary[i]);
		fprintf(merge,"%d\n",ary[i]);
	}
}
/*

OUTPUT :


-------------------------------------------------------------------

ary[0] : 1
ary[1] : 36
ary[2] : 12
ary[3] : 5
ary[4] : 47
ary[5] : 25
ary[6] : 54
ary[7] : 34
ary[8] : 117
ary[9] : 37


The Merged And Sorted Array Is :

ary[0] : 1

ary[1] : 5

ary[2] : 12

ary[3] : 25

ary[4] : 34

ary[5] : 36

ary[6] : 37

ary[7] : 47

ary[8] : 54

ary[9] : 117

--------------------------------

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FILE 1 :

01
36
12
05
47


-------------------------------------------------------------------

FILE 2:

25
54
34
117
37


-------------------------------------------------------------------
*/