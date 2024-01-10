#include<stdio.h>
summation(int *p,int *q,int r1,int c1,int r2,int c2)
{
	int i,j,ans[5][5];
	printf("\n\n\nThe Summation Of Matrix Is : \n");
	printf("\n\nAddition:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			ans[i][j] = *p + *q ;
			printf("%d\t",ans[i][j]);
			p++;
			q++;
		}
		p = p + (5-r1);/*GIVING OTHERS SPACE AS NULL AND COMPLETING LINE*/
		q = q + (5-c1);	/*GIVING OTHERS SPACE AS NULL AND COMPLETING LINE*/
		printf("\n");
	}
	printf("\n\nSubtaction : \n")
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			ans[i][j] = *p - *q ;
			printf("%d\t",ans[i][j]);
			p++;
			q++;
		}
		p = p + (5-r1);/*GIVING OTHERS SPACE AS NULL AND COMPLETING LINE*/
		q = q + (5-c1);	/*GIVING OTHERS SPACE AS NULL AND COMPLETING LINE*/
		printf("\n");
	}
}
main()
{
	int row1,row2,col1,col2,ar[5][5],ary[5][5],i,j;
	printf("\nEnter Row Of Matrix 1 :");
	scanf("%d",&row1);
	printf("\nEnter Columns Of Matrix 1 :");
	scanf("%d",&col1);
	printf("\nEnter Row Of Matrix 2 :");
	scanf("%d",&row2);
	printf("\nEnter Columns Of Matrix 2 :");
	scanf("%d",&col2);
	if(row1 == row2 && col1 == col2)
	{
		printf("\n\nMatrix 1 : \n");
		for(i=0;i<row1;i++)
		{
			 for(j=0;j<col1;j++)
	 		{
	 			printf("ary[%d][%d] : ",i,j);
	  			scanf("%d",&ary[i][j]);
	 		}	
		}
		printf("\n\nMatrix 2 : \n");
		for(i=0;i<row2;i++)
		{
	 		for(j=0;j<col2;j++)
	 		{
	 			printf("ary[%d][%d] : ",i,j);
	  			scanf("%d",&ar[i][j]);
	 		}	
		}
		printf("\n\nMatrix 1 : \n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("%d\t",ary[i][j]);
			}
			printf("\n");
		}
		printf("\n\nMatrix 2 : \n");
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				printf("%d\t",ar[i][j]);
			}
			printf("\n");
		}
		summation(ary,ar,row1,col1,row2,col2);
	}
	else
	{
		printf("\n\nMatrix Summation Is Not Possible.\n");	
	}
}
/*
--------------------------------------------------------------------

OUTPUT :


Enter Row Of Matrix 1 :3

Enter Columns Of Matrix 1 :3

Enter Row Of Matrix 2 :3

Enter Columns Of Matrix 2 :3


Matrix 1 :
ary[0][0] : 2
ary[0][1] : 4
ary[0][2] : 6
ary[1][0] : 3
ary[1][1] : 5
ary[1][2] : 0
ary[2][0] : 1
ary[2][1] : 55
ary[2][2] : 7


Matrix 2 :
ary[0][0] : 12
ary[0][1] : 34
ary[0][2] : 2
ary[1][0] : 54
ary[1][1] : 6
ary[1][2] : 78
ary[2][0] : 2
ary[2][1] : 8
ary[2][2] : 9


Matrix 1 :
2       4       6
3       5       0
1       55      7


Matrix 2 :
12      34      2
54      6       78
2       8       9



The Summation Of Matrix Is :

Addition :
14      38      8
57      11      78
3       63      16

Subtraction :
-10		-30		4
-51		-1		-78
-1		47		-2


--------------------------



--------------------------------------------------------------------*/
