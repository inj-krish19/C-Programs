#include<stdio.h>
// it is function to pass pointer 
square(int *p,int *o,int *l)
{
	*p=*p * *p;
	*o=*o * *o;
	*l=*l * *l;	
}
/*
swap(int *k,int *j)
{
	int tem;
	tem=*k;
	*k=*j;
	*j=tem;
}*/

// pointer to all abouv
// 1.learn
// 2.square
// 3.additon nahi malik
// 4.swap
// 5.max 
main()
{
//int op=4,*o;
//int ab,ba;
int a=7,b=8,c=9;
   //o=&op;
   // it can take addres
   printf("\t \t \t WELCOME MALIK\n");
	
	//printf("addres=%d\n",o);
	// it can take addres to value
	//printf("addres value=%d\n",*o);
	square(&a,&b,&c);
	printf("%d\t %d\t %d\t",a,b,c);
	
	/*printf("\nEnter First Element=");
	
	scanf("%d ",&ab);
	printf("\nEnter Second Element=");
	scanf("%d ",&ba);
	
	swap(&ab,&ba);
	printf("\n After Swap Two =%d\t %d\t",ab,ba);*/
}
























































