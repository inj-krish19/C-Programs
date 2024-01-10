#include<stdio.h>
merge(int *p,int a,int *q,int b)
{
	int cry[10],i,temp,j ;
	printf("\n\n\n\n\nMerging Of Two Arrays !");
	for(i=0;i<a+b;i++)
	{	
		if(i<a)
		{
		cry[i] = *p ;
		printf("\nary[%d] : %d",i,cry[i]);
		p++;
		}
		else
		{
		cry[i] = *q;
		printf("\nary[%d] : %d",i,cry[i]);
		q++;	
		}	

}
	
	//sorting   sorting    sorting   sorting   !		
	
	
	printf("\n\n\n\n\nSorting of Merged Of Two Arrays !");
	for(i=0;i<a+b;i++)
	{	
		
	for(j=i+1;j<a+b;j++)
		{
			if(cry[i]>cry[j])
			{
				temp = cry[i];
				cry[i] = cry[j];
				cry[j] = temp;
			}
		}
	}
		for(i=0;i<a+b;i++)
			{
				
				printf("\n%d",cry[i]);
							
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
//	MERGE IS A FUNCTION . VALUES ARE GOING IN FUNCTION !!!!
	merge(ary,5,bry,5);
	
}
