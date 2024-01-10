#include<stdio.h>
#define data 2
#define ata 5
/* RETURNING TWO VALUES FROM FUNCTION TO MAIN 
int *mas(int *p , int *q )
{
		int  r;
		 r = *p ;
		 *p = *q ;
		 *q = r ;
		 return p;
		 return q;
}
main()
{
	int  i, j ;
	i = 5 ;
	j = 8 ;
	printf("Values Are : %d  %d ", i , j);
	mas(&i,&j);
	printf("\n\nValues Are : %d  %d ", i , j);
}*/
/*/	 RETURNING TWO VALUES FROM FUNCTION TO MAIN BUT WITH BIG ARRAY [SIZE 5]
int *sas(int *p )
{
	int  r,*q ;
	int i;
	for (i =0; i<ata ; i++)
	{
	q = p + 1 ;
	r = *p ;
	*p = *q ;
	*q = r ;
	return p;

	}
}
main()
{
	int ary[ata],i;
	for(i=0;i<ata;i++)
	{
	printf("\nEnter 5 Numbers :\n");
	scanf("%d",&ary[i]);
	}
	sas(ary);
	for(i=0;i<ata;i++)
	{
	printf("\nNumbers : %d",ary[i]);
	}
}*/
//	RETURNING TWO VALUES FROM FUNCTION TO MAIN BUT WITH SMALL ARRAY [SIZE 2]
int *bas(int *p , int *q)
{
	int  r ;
	r = *p ;
	*p = *q ;
	*q = r ;
	return p;
	return q;
}
main()
{
	int ary[data];
	printf("\nEnter Two Numbers :\n");
	scanf("%d %d",&ary[0],&ary[1]);
	bas(&ary[0],&ary[1]);
	printf("\nEnter Two Numbers : %d %d",ary[0],ary[1]);
}
