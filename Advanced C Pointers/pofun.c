#include<stdio.h>
	
void to(int *p,int *k,int *m)
{
	*p = *p * *p;
	*k = *k * *k;
	*m = *m * *m;
	
};
main ()
{
int a=1,b=15,c=18,op;

 to(&a,&b,&c);
	printf("%d\n %d\n %d \n",a,b,c);
}
