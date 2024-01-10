#include<stdio.h>
sort(int *p,int n)
{
	int i,j,*q,*ptr,temp,t=0;
	printf("\nThe Sorted Array Is : \n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i) > *(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",*p);
		p++;
	}
}
main()
{
	int arr[10];
	printf("\nEnter 10 Element for Sorting :\n");
	int i;//*
	for(i=0;i<10;i++)
	{
		printf("\narr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	sort(arr,10);
}
/*
-----------------------------------------------------------

OUTPUT :


Enter 10 Element for Sorting :

arr[0] : 100

arr[1] : 23

arr[2] : 67

arr[3] : 54

arr[4] : 12

arr[5] : 98

arr[6] : 67

arr[7] : 876

arr[8] : 00

arr[9] : 23

The Sorted Array Is :
0
12
23
23
54
67
67
98
100
876
-----------------------------------------------------------*/
