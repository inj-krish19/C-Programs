#include<stdio.h>
add(int p)
{
	printf("\nThe Number Is :");
	printf("%d",p);	
	
} 
main()
{
	int a,*p;	
	printf("\nEnter A Number :");
	scanf("%d",&a);
	p=&a;
	add(*p);
}
