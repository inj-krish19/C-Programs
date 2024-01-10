/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 SUBJECT - PROGRAM OF POINTERS 
	
	QUESTION - 5 )	Using Pointers Sort An Array  .

*/
#include<stdio.h>
void sort(int *p)
{
	int i,j,wap;
	int *q,*ptr,min=999;
	for(i=0;i<5;i++)
	{
		min=999;
		ptr=p;             
		for(j=0;j<5-i;j++)
		{  
			if(min> *ptr)
			{
				min = *ptr;       
				q = ptr;         
			} 
			ptr++;		
		}
	wap=*p;
	*p=*q;
	*q=wap;
	p++;
	}
}
void main()
{
	int ary[5],i ;
		printf("Enter  5 Numbers : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&ary[i]);
	}
	sort(ary);
	
	for(i=0;i<5;i++)
	{
		printf("%d ",ary[i]);
	}
}
/*

OUTPUT :

TRY 1 :
Enter  5 Numbers :
1
9
7
5
-7
 
-7 1 5 7 9
--------------------------------

*/
