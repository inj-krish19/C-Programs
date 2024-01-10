#include<stdio.h>
void square(int *p,int *q,int *r)
{
	*p = *p * *p ;
	*q = *q * *q ;
	*r = *r * *r ;
	printf("\nSquare Of A Is : %d",*p);
	printf("\nSquare Of B Is : %d",*q);
	printf("\nSquare Of C Is : %d",*r);
}
main()
{
	int a,b,c;
	printf("\nEnter Value Of A:");
	scanf("%d",&a);
	printf("\nEnter Value Of B:");
	scanf("%d",&b);
	printf("\nEnter Value Of C:");
	scanf("%d",&c);
	square(&a,&b,&c);
}
