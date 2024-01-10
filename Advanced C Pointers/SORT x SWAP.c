#include<stdio.h>
void swap(int *p,int size)
{
	int i,temp,j;
	printf("\nSorted Array Is :");
	for(i=0;i<size;i++)
	{
	 for(j=i+1;j<size ;j++)
	 {
	  if(p[i] > p[j])
	  {
	   temp= p[i];
	   p[i] = p[j] ;
       p[j] = temp; 	
		} 
	 }
	
	printf("\n%d",p[i]);
}
/*
 temp = a;
 a = b;
 b = a;  
*/
}
main()
{
	int i,ary[5],data;
	printf("Enter Value Of Size :");
	scanf("%d",&data);
/*	int a,b;
	a=5;
	b=9;
*/	for(i=0;i<data;i++)
	{
		printf("\n[%d] : ",i+1);
		scanf("%d",&ary[i]);
	}
	swap(ary,5);
	/*for(i=0;i<data;i++)
	{
		printf("\n\n%d",ary[i]);
		printf("\n\n%d",&ary[i]);
	}*/
}
