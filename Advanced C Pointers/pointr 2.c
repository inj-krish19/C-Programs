#include<stdio.h>
void add(int *p,int *q,int size,int s)
{
	int i,j;
	/*p = ary ;
	*q = bry ;*/
	for (i=0;i<size;i++)
	{
		*p = *p + *q ;
		printf("\n%d",*p);
		*q=0;
		p++,q++;
	}
}
main()
{
	int ary[5],bry[5],i;

	for(i=0;i<5;i++)
	{
		printf("\nEnter Number :");
		scanf("%d",&ary[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nEnter Number :");
		scanf("%d",&bry[i]);
	}
	add(ary,bry,5,5);
}
