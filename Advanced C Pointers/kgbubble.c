#include<stdio.h>
main()
{
	int ary[5] = {9,5,1,2,0};
	int i,j,k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			if(ary[i] < ary[j])
			{
		      k = ary[i];
			  ary[i] = ary[j];
			  ary[j] = k;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\t%d",ary[i]);
	}
}
