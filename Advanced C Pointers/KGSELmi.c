#include<stdio.h>
main()
{
	int ary[5] = {18,217,11,75,69};
	int i,j,k,tem,pos;
	for(i=0;i<4;i++)
	{
		
		pos = i;
		for(j=i;j<5;j++)
		{
			if(ary[pos] > ary[j])
			{
				pos=j;	
			}
		}
		tem = ary[i];
    	ary[i]=ary[pos];
    	ary[pos]=tem;
	}
	for(i=0;i<5;i++)
	{
			printf("\t%d",ary[i]);
	}
}
