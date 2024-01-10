#include<stdio.h>
#include<string.h>
 	struct pro 
{
	int pp;
	char gg[15];
	int qun; 
};
 main()
{

	struct pro sh[10],p;
	int i,num,j;
	
	printf("\nhow many product=");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nenter code= ");
		scanf("%d",&sh[i].pp);
		printf("\n product name= ");
		scanf("%s",&sh[i].gg);
    	printf("\n product quntiaty= ");
  		scanf("%d",&sh[i].qun);
	}
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(sh[i].pp>sh[j].pp)
			{
				p=sh[i];
				sh[i]=sh[j];
				sh[j]=p;
			}
			}	
	}
	printf("after shorting \n");
	for(i=0;i<num;i++)
	{
		printf("%d %s %d",sh[i].pp,sh[i].gg,sh[i].qun);
		printf("\n");
	}
}
