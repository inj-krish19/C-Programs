/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 SUBJECT - PROGRAM OF POINTERS 
	
	QUESTION - 5 )	Using Pointers Merge 2 Arrays and then Sort That Array  .

*/
#include<stdio.h>
sort(int *p)
{
	int i,j,min = 999,swap;
	int *q;
	int *r;
	for(i=0;i<5;i++)
	{
		min = 999 ;
		q = p ;
		for(j=i;j<5;j++)
		{
			if(*q < min)
			{
				min = *q ;
				r = q ;
			}
			q++ ;
		}
		swap = *p ;
		*p = *r ;
		*r = swap ;
		p++;
	}
	return (*p);
}
int merge(int *p,int *q)
{
	int *r;
	int i;
	for(i=0;i<10;i++)
	{
		if(i<5)
		{
			*r = *p ;
			p++;
		}
		else
		{
			*r = *q ;
			q++;
		}
		r++;
	}
	return(*r);
}
main()
{
	int i,cry[10],ary[5],ar[5];
	int *s ;
	printf("Enter 2 Array Of 5 Numbers\n");
	printf("ARRAY 1:\n");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&ary[i]);
	}
	printf("ARRAY 2:\n");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&ar[i]);
	}
	*s=merge(ary,ar);
	printf("\nMerged Array Is :\n");
	for(i=0;i<10;i++)
	{
		cry[i] = *s ;
		printf("\n%d",cry[i]);
		s++ ;
	}
	sort(cry);
	printf("\nMerged And Sorted Array Is :\n");
	for(i=0;i<10;i++)
	{
		printf("\n%d",cry[i]);
	}
}

/*

OUTPUT :

TRY 1 :

Enter 2 Array Of 5 Numbers
ARRAY 1:
9
7
5
3
1
ARRAY 2:
2
4
6
8
0

Merged Array Is :
9
7
5
3
1
2
4
6
8
0

Merged And Sorted Array Is :
0
1
2
3
4
5
6
7
8
9
 
--------------------------------
*/
