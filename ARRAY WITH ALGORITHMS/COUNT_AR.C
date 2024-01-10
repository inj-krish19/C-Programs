#include<stdio.h>
#include<conio.h>
main()
{
	int arr[100],n,i,pos_count=0,neg_count=0,zero_count=0;
	clrscr();
	printf("\nEnter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			pos_count++;
		}
		else if(arr[i]<0)
		{
			neg_count++;
		}
		else
		{
			zero_count++;
		}

	}
	printf("\ntotal no of positive elements are %d",pos_count);
	printf("\ntotal no of negtaive elements are %d",neg_count);
	printf("\ntotal no of zero elements are %d",zero_count);
	getch();
}


























