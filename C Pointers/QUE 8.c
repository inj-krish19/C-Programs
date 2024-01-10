#include<stdio.h>
floating(float *m,int *n)
{
	float p,*ans;
	p = *m - *n ; 
	ans = &p;
	printf("\n\nValue After Increasing Floating Point Is : ");
	*ans = *ans + *n ;
	printf("%8.2f",*ans);
}
main()
{
	float number;
	int n;
	printf("\nEnter Number To Convert Into Floating Point : ");
	scanf("%f",&number);
	n = number;
	floating(&number,&n);
}
/*
----------------------------------------------------------------

OUTPUT : 


Enter Number To Convert Into Floating Point : 19.555556


Value After Increasing Floating Point Is :    19.56

----------------------------------------------------------------*/
