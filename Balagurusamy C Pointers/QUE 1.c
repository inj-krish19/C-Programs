/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 SUBJECT - PROGRAM OF POINTERS
 
QUESTION - 1 )	Take an array of numbers as input write functions
				(using pointers)to carry out following functionality :

					i	)	Maximum
					ii	)	Minimum
					iii	)	Average
					iv	)	Searching
*/
#include<stdio.h>
#define size 5
maximum(int *p)
{
	int  i,max=0;
	int *q ;
	*q  = *p +1 ;
	for(i=0;i<size;i++)
	{
	 //With Selection Sort 
		if(max < *p)
		{
			max = *p ; 
		}
		p++ ;
	/*/With Bubble Sort
		if(*p < *q)
		{
			max = *p ; 
		}
		p++ ;
		q++ ;*/
	}
	//printf("\n\nMaximum Is %d",max);
	return (max) ;
}
minimum(int *p)
{
	int  i,min=999;
	int *q ;
	int *z;
	*q  = *p +1 ;
	for(i=0;i<size;i++)
	{
	 //With Selection Sort 
		if(min > *p)
		{
			min = *p ; 
		}
		p++ ;
	 /*/With Bubble Sort  		[UNDER CONSTRUCTION ]
		if(*p > *q)
		{
			min = *p ;
			z=p; 
		}
		p++ ;
		q++ ;
	}
	return *z ;
	*/
	}
	//printf("\n\nMinimum Is %d",min);
	return (min) ;
}
float average(int *p)
{
		int i;
		float tot = 0 , avg;
		for(i=0;i<size;i++)
		{
			tot = * p + tot ;
			p++ ; 
		}
		avg = tot / size ;
		return avg ;
}
search(int *p,int n)
{
	int i,er=-7,pos = 0;
	for(i=0;i<size;i++)
	{
		if(*p == n)
		{
			pos = i ;
			return (pos);
		}
		p++ ;
	}
	return (er);
}
main()
{
	int i, x, j ,ary[size],mx,mnm,src;
	float av;
	printf("\nEnter 5 Numbers :");
	for(i=0;i<size;i++)
	{
		printf("\nary[%d] : ",i);
		scanf("%d",&ary[i]);
	}
	printf("\n------- PRINTING NUMBERS -------");
	for(i=0;i<size;i++)
	{
		printf("\n\nary[%d] : %d",i,ary[i]);
	}
	mx = maximum(ary);
	printf("\n\nMaximum Is %d",maximum(ary));
	//	printf("\n\nMaximum Is %d",mx);
	mnm = minimum(ary);
	printf("\n\nMinimum Is %d",minimum(ary));
	//	printf("\n\nMaximum Is %d",mnm);
	av = average(ary);
	printf("\n\nAverage Is %f",average(ary));
	//	printf("\n\nAverage Is %f",av);
	printf("\n\nEnter Number That You Want To Search :");
	scanf("%d",&src);
	x = search(ary,src);
	if(x > 0)
	{	/*limiatation is if we want to return a posistion more than 1 time then print 
		all position in user define function else it will answer only one time*/ 
		printf("\n\nNumber Found At Position : %d",x);
	}
	else
	{
		printf("\n\nNumber Not Found");
	}	
	printf("\n\n\n\n\n\n\n\n----- PROGRAM ENDS -----\n\n\n\n\nAssignment 1 Question 1 Done !");
	printf("\n\n\n\n\n-----THANK YOU -----\n\n\n\n\n");
}

/*

OUTPUT :

TRY 1 :

Enter 5 Numbers :
ary[0] : 1

ary[1] : 3

ary[2] : 5

ary[3] : 7

ary[4] : 9

------- PRINTING NUMBERS -------

ary[0] : 1

ary[1] : 3

ary[2] : 5

ary[3] : 7

ary[4] : 9

Maximum Is 9

Minimum Is 1

Average Is 5.000000

Enter Number That You Want To Search :5


Number Found At Position : 2







----- PROGRAM ENDS -----




Assignment 1 Question 1 Done !




-----THANK YOU -----

-----------------------------------------------------------------------

TRY 2 :

Enter 5 Numbers :
ary[0] : 1

ary[1] : 3

ary[2] : 5

ary[3] : 7

ary[4] : 9

------- PRINTING NUMBERS -------

ary[0] : 1

ary[1] : 3

ary[2] : 5

ary[3] : 7

ary[4] : 9

Maximum Is 9

Minimum Is 1

Average Is 5.000000

Enter Number That You Want To Search :2


Number Not Found







----- PROGRAM ENDS -----




Assignment 1 Question 1 Done !




-----THANK YOU -----






*/
