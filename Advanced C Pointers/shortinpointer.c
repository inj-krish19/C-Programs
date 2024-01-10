#include<stdio.h>
// SHORTING FUNCTION 
pri(int *p, int size)
{
	int i,j,tem=0;
	for(i=0;i<size;i++)
	{
		printf("[%d]=",i);
		scanf("%d",&p[i]);

	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if( p[i]> p[j])
			{
			
			tem=p[i];
			p[i]=p[j];
			p[j]=tem;
			}
		}
	}
for(i=0;i<size;i++)
	{
		printf("%d\n",p[i]);
	}
}
  main()
{
	int arr[5];
	pri(arr,5);
// 	printf("%d\n",arr);
	
}



