#include<stdio.h>
#include<string.h>
sort(char *a,char *b,char *c,int p,int q,int r)
{
	int i,j,flag,temp,del;
	printf("\n\n\n\nThe Sorted Strings Are .....");
	for(i=0;i<2;i++)
	{
		flag=0;
		if(*a <= *b)
		{
			if(*a <= *c)
			{	for(j=0;j<p;j++){
				printf("\n%s",*(a+j));
			}
				if(i==1){
				flag = 1 ;} 
				a = b;
			}
			else
			{
			if(*c <= *b)
				for(j=0;j<r;j++){
				printf("\n%s",*(c+j));
			}
				if(i==1){
				del = 1 ;}
				c = b;
			}
		}
		else
		{
			if(*b <= *c)
			{
				for(j=0;j<q;j++){
				printf("\n%s",*(b+j));
			}
				if(i==1){
				temp = 1 ;}
				b = c;
			}
			else
			{
			if(*c < *a)
				for(j=0;j<r;j++){
				printf("\n%s",*(c+j));
			}
				if(i==1){
				del = 1 ;}
				c = a;
			}
		}
	}
	if(flag == 1)
		{
			for(j=0;j<r;j++){
				printf("\n%s",*(c+j));
			}
		}
		else if(del == 1)
		{
			for(j=0;j<p;j++){
				printf("\n%s",*(a+j));
			}
		}
		else if(temp == 1)
		{
			for(j=0;j<q;j++){
				printf("\n%s",*(b+j));
			}
		}
}
main()
{
	char *a,*b,*c;
	char str1[3][10];
	int x,y,z;
	printf("Enter 3 Strings : \n");
	scanf("%s",str1[0]);
	scanf("%s",str1[1]);
	scanf("%s",str1[2]);
	printf("\n");
	printf("\nSTRING 1  : ");
	printf("%s",str1[0]);
	printf("\nSTRING 2  : ");
	printf("%s",str1[1]);
	printf("\nSTRING 3  : ");
	printf("%s",str1[2]);
	x = strlen(str1[0]);
	y = strlen(str1[1]);
	z = strlen(str1[2]);
	sort(*a,*b,*c,x,y,z);
}
/*
---------------------------------------------------------------

OUTPUT :

 Enter 3 Strings :
DIVINE
AWAAM
MUHFAAD


STRING 1  : DIVINE
STRING 2  : AWAAM
STRING 3  : MUHFAAD



The Sorted Strings Are .....
AWAAM
DIVINE
MUHFAAD
--------------------------------

---------------------------------------------------------------*/
