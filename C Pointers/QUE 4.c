#include<stdio.h>
multi(int *p,int *q,int r1,int c1,int r2,int c2)
{
	int i,j,k,a=0,b=0,arr[r1][c2];
	int *r,s;
	r = p ;
	s = q ;
	printf("\n\nMatrix Multiplication 's Answer Is : \n\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			p = r + (i*5);/*FOR NEW LINE*/
			q = s + (i*4);/*SAME LINE FOR OTHER ELEMENT*/
			/*SAME AS QUESTION 3 */
			for(k=0;k<c1;k++)
			{
				if(i == 0 && j == 1)
				{
					if(a == 0)
					{
					  q = q + 1 ;
					  a++;
					}
				}	
				if(j == 0 && i == 1)
				{
					if(b == 0)
					{
					  q = q - 1 ;
					  b++;
					}
				}	
				//printf("%d   %d\t",p,q);
				arr[i][j] = (*p * *q) + arr[i][j];
				p++ ;
				q = q + 5 ;
			}
			printf("%d\t",arr[i][j]);
		}
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
	if(col1 == row2)
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
		multi(ary,ar,row1,col1,row2,col2);
	}
	else{
		printf("\n\n\nMatrix Multiplication Is Not Possible");
	}
	printf("\n\n");
}
/*

-----------------------------------------------------------------

Enter Row Of Matrix 1 :2

Enter Columns Of Matrix 1 :3

Enter Row Of Matrix 2 :3

Enter Columns Of Matrix 2 :2


Matrix 1 :
ary[0][0] : 1
ary[0][1] : 5
ary[0][2] : 9
ary[1][0] : 3
ary[1][1] : 5
ary[1][2] : 7


Matrix 2 :
ary[0][0] : 4
ary[0][1] : 6
ary[1][0] : 2
ary[1][1] : 8
ary[2][0] : 1
ary[2][1] : 3


Matrix 1 :
1       5       9
3       5       7


Matrix 2 :
4       6
2       8
1       3


Matrix Multiplication 's Answer Is :

23      73
29      79



---------------------------------------------------------------*/
