#include<stdio.h>
main()
{
	int ary[5] = {18,217,11,75,69};
	int i,j,k,tem,min=999,pos;
	for(i=0;i<4;i++)
	{
			min=999;
		for(j=i;j<5;j++)
		{
		
			if(min > ary[j])
			{
		     min=ary[j];
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
