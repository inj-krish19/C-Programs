#include<stdio.h>
transpose(int *p,int r,int c)
{
	int i,j;
	int *q;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			q = ((p+i)+(5*j));
			/*100 + 0 + 0 THEN 100 + 0 + 5(NEW LINE 1ST ELEMENT)
			100 + 1 (2ND ELEMENT) + 0 [1ST LINE] THEN 
			100 + 1 (2ND ELEMENT) + 5[2ND LINE]*/
			printf("%d\t",*q);
		}
		q = q + 20 ;//20 BECAUSE 5 MAX OF 4BYTE = 20 THATS NEW LINES
		printf("\n");
	}
}
main()
{
	int row,col,ary[5][5],i,j;
	printf("\nEnter Row Of Matrix :");
	scanf("%d",&row);
	printf("\nEnter Columns Of Matrix :");
	scanf("%d",&col);
	printf("\n\n");
	for(i=0;i<row;i++)
	{
	 	for(j=0;j<col;j++)
	 	{
	 		printf("ary[%d][%d] : ",i,j);
	  		scanf("%d",&ary[i][j]);
	 	}	
	}
	printf("\n\nMatrix Is : \n");
	for(i=0;i<row;i++)
	{
		 for(j=0;j<col;j++)
	 	{
	 		printf("%d\t",ary[i][j]);
	 	}
		 printf("\n");		
	}
	printf("\n\nTransposed Matrix Is : \n");
	transpose(ary,row,col);
}
/*

------------------------------------------------------

OUTPUT :

Enter Row Of Matrix :3

Enter Columns Of Matrix :3


ary[0][0] : 1
ary[0][1] : 5
ary[0][2] : 9
ary[1][0] : 77
ary[1][1] : 55
ary[1][2] : 33
ary[2][0] : 4
ary[2][1] : 6
ary[2][2] : 8


Matrix Is :
1       5       9
77      55      33
4       6       8



Transposed Matrix Is :
1       77      4
5       55      6
9       33      8


------------------------------------------------------*/
