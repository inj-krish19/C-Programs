#include<stdio.h>
/*add(int p)
{
	printf("\nThe Number Is :");
	printf("%d",p);	
	
} */
main()
{
	//int a,**p;	
	
//	a=47;
//	printf("\n%d",a);
//	printf("\n%d",p);
//	printf("\n%u",&a);
//	printf("\n%d",*p);
//	printf("\n%d",**p);
	int a=10;
	int* p;
	int** q;
	int*** r;
	r=&q;
	q=&p;
	p=&a;
	printf("address ( a )= %d , \tvalue ( a )= %d \n",&a,a);
	printf("address ( a )= %d , \tvalue ( a )= %d , \taddress ( p ) = %d \n",p,*p,&p);
	printf("address ( p )= %d , \taddress ( a ) = %d , \taddress ( q ) = %d , \tvalue ( a )= %d \n",q,*q,&q,**q);
	printf("address ( q )= %d , \taddress ( p ) = %d , \taddress ( r ) = %d , \taddress ( a ) = %d , \tvalue ( a ) = %d\n",r,*r,&r,**r,***r);
	
	
	/*
	
		VALUE OF A = A , *P , **Q , ***R 
		ADDRESS OF A = &A , P , *Q , **R
		ADDRESS OF P = Q , *R , &P
		ADDRESS OF Q = R , &Q
		ADDRESS OF R = &R
	
		NOTE : 
	*/
}
