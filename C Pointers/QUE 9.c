#include<stdio.h>
#include<string.h>
occurence(char *p,char *q,int a)
{
	int i;
	for(i=0;i<a;i++)
	{
		if(*p == *q)
		{
			return (i);
		}
		p++;
	}
}
delete(char *x,char *y,int b)
{
	int i;
	for(i=0;i<b;i++)
	{
		if(*x != *y)
		{
			printf("%c",*x);
		}
		x++;
	}
}
copy(char *p,char *q,char *r,int n)
{
	int i;
	printf("\n\nStrings After Copied Are : ");
	for(i=0;i<n;i++)
	{
		*r = *p;	
		r++;
		p++;
	}
	p = p - i;
	for(i=0;i<n;i++)
	{
		*p = *q;
		printf("%c",*p);	
		p++;
		q++;
	}
	p = p - i;
	r = r - i;
	q = q - i;
	printf("\t");
	for(i=0;i<n;i++)
	{
		*q = *r;
		printf("%c",*q);
		q++;
		r++;
	}
}
ncopy(char *p,char *q,char *r,int n)
{
	int i;
	printf("\n\nStrings After Copied Are : ");
	for(i=0;i<n;i++)
	{
		*r = *p;	
		r++;
		p++;
	}
	p = p - i;
	for(i=0;i<n;i++)
	{
		*p = *q;
		printf("%c",*p);	
		p++;
		q++;
	}
	p = p - i;
	r = r - i;
	q = q - i;
	printf("\t");
	for(i=0;i<n;i++)
	{
		*q = *r;
		printf("%c",*q);
		q++;
		r++;
	}
}
length(char *a,char *b)
{
	int i;
	for(i=0;*a != '\0';a++)
	{
		i++;
	}
	printf("\n\nLength Of First String : %d",i);
	for(i=0;*b != '\0';b++)
	{
		i++;
	}
	printf("\n\nLength Of Second String : %d",i);
}
sort(char *p,int a)
{
	int i,j;
	int temp;
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(*(p+i) > *(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;	
			}
		}
	}	
	for(i=0;i<a;i++)
	{
		printf("\n%c",*p);
		p++;
	}
}
reverse(char *p,int a)
{
	int i,j;
	int temp;
	p = p + a - 1;
	for(i=0;i<a;i++)
	{
		printf("%c",*p);
		p--;
	}
}
compare(char *a,char *b,int al,int bl)
{
	int i,x;
	x = al;
	if(al == bl)
	{
		for(i=0;i<al;i++)
		{
			if(*a == *b)
			{
				a++;
				b++;
				if(x == al)
					return 0;
			}
		}
	}
	else if(al < bl)
		return (-1);
	else
		return 1;
}
main()
{
	char str1[10],str2[10],null[10];
	char a,b,c,d;
	char reset1[10],reset2[10];
	printf("\nEnter Two Strings : \n");
	gets(str1);
	printf("\n");
	gets(str2);
	printf("\n");
	printf("\n\nThe Two Strings are : %s and %s\n",str1,str2);
	int al,bl,apos,bpos;
	al = strlen(str1);
	bl = strlen(str2);
	int n,ret;
	strcpy(reset1,str1);
	strcpy(reset2,str2);
	/* (A & B) BEGINS  */
	printf("\n\nEnter Two Character Of To Find Its Position From Respetively String : ");
	scanf("%c   %c",&a,&b);
	getchar();
	apos = occurence(str1,&a,al);
	if(apos >= 0 && apos != al)
	{
		printf("\n\nPosition Of %c In %s Is at Position %d ",a,str1,apos+1);
	}
	else{
		printf("\n\nPosition Not Found");
	}
	printf("\n\n\n");
	bpos = occurence(str2,&b,bl);
	if(bpos >= 0 && bpos != bl)
	{
		printf("\n\nPosition Of %c In %s Is at Position %d ",b,str2,bpos+1);
	}
	else{
		printf("\n\nPosition Not Found");
	}
	/*TILL (A & B) OVER*/
	/*(C & D) BEGINS */
	strcpy(str1,reset1);
	strcpy(str2,reset2);
	printf("\n\nEnter Two Character Of To Delete Its Position From Respetively String : ");
	scanf("%c	%c",&c,&d);
	getchar();
	printf("\n\nFirst String Without %c is ",c);
	delete(str1,&c,al);
	printf("\n\nSecond String Without %c is ",d);
	delete(str2,&d,bl);
	/*TILL (C & D) OVERS & (E) (F) IGNORED */
	/*(G) BEGINS */
	strcpy(str1,reset1);
	strcpy(str2,reset2);
	copy(str1,str2,null,al);
	/*(G) OVERS */
	/*(H) BEGINS */
	strcpy(str1,reset1);
	strcpy(str2,reset2);
	printf("\n\n\nEnter Number Till You Want To Copy String :");
	scanf("%d",&n);
	getchar();
	ncopy(str1,str2,null,n);
	/*(H) OVERS */
	/*(I) BEGINS */
	strcpy(str1,reset1);
	strcpy(str2,reset2);
	length(str1,str2);
	/*(I) OVERS */
	/*(J) BEGINS */
	strcpy(str1,reset1);
	strcpy(str2,reset2);
	printf("\n\nThe Sorted Array Of First String :\n");
	sort(str1,al);
	printf("\n\nThe Sorted Array Of Second String :\n");
	sort(str2,bl);
	/*(J) OVERS */
	/*(K) BEGINS */
	strcpy(str1,reset1);
	strcpy(str2,reset2);
	printf("\n\nThe Reversed Array Of First String :\n");
	reverse(str1,al);
	printf("\n\nThe Reversed Array Of Second String :\n");
	reverse(str2,bl);
	/*(K) OVERS */
	/*(L) BEGINS */
	strcpy(str1,reset1);
	strcpy(str2,reset2);
	ret = compare(str1,str2,al,bl);
	if(ret == -1)
	{
		printf("\n\nReturned Value Is -1 You Can see Gabage At Below");
		return (-1);	
	}
	if(ret == 0)
	{
		printf("\n\nReturned Value Is 0 You Can see It Below");
		return 0;
	}
	if(ret == 1)
	{
		printf("\n\nReturned Value Is 1 You Can see It Below");
		return 1;	
	}
	/*(L) OVERS & (M & N) IGNORED*/
}	
/*
----------------------------------------------------------------------------

OUTPUT 1 :


Enter Two Strings :
KRISH

SHAH



The Two Strings are : KRISH and SHAH


Enter Two Character Of To Find Its Position From Respetively String : S S


Position Of S In KRISH Is at Position 4




Position Of S In SHAH Is at Position 1

Enter Two Character Of To Delete Its Position From Respetively String : S       S


First String Without S is KRIH

Second String Without S is HAH

Strings After Copied Are : SHAH KRISH


Enter Number Till You Want To Copy String :3


Strings After Copied Are : SHA  KRI

Length Of First String : 5

Length Of Second String : 4

The Sorted Array Of First String :

H
I
K
R
S

The Sorted Array Of Second String :

A
H
H
S

The Reversed Array Of First String :
HSIRK

The Reversed Array Of Second String :
HAHS

Returned Value Is 1 You Can see It Below

--------------------------------

Process exited after 20.12 seconds with return value 1
Press any key to continue . . .

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

OUTPUT 2 :


Enter Two Strings :
KRISHNA

KAUL



The Two Strings are : KRISHNA and KAUL


Enter Two Character Of To Find Its Position From Respetively String : K L


Position Of K In KRISHNA Is at Position 1




Position Of L In KAUL Is at Position 4

Enter Two Character Of To Delete Its Position From Respetively String : J       D


First String Without J is KRISHNA

Second String Without D is KAUL

Strings After Copied Are : KAUL KRISHNA


Enter Number Till You Want To Copy String :5


Strings After Copied Are : KAUL KRISH

Length Of First String : 7

Length Of Second String : 4

The Sorted Array Of First String :

A
H
I
K
N
R
S

The Sorted Array Of Second String :

A
K
L
U

The Reversed Array Of First String :
ANHSIRK

The Reversed Array Of Second String :
LUAK

Returned Value Is 1 You Can see It Below

--------------------------------
 
 
Process exited after 38.52 seconds with return value 1
Press any key to continue . . .

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

OUTPUT 3 :


Enter Two Strings :
HEART

CLUTCH



The Two Strings are : HEART and CLUTCH


Enter Two Character Of To Find Its Position From Respetively String : A T


Position Of A In HEART Is at Position 3




Position Of T In CLUTCH Is at Position 4

Enter Two Character Of To Delete Its Position From Respetively String : R       T


First String Without R is HEAT

Second String Without T is CLUCH

Strings After Copied Are : CLUTC        HEART


Enter Number Till You Want To Copy String :5


Strings After Copied Are : CLUTC        HEART

Length Of First String : 5

Length Of Second String : 6

The Sorted Array Of First String :

A
E
H
R
T

The Sorted Array Of Second String :

C
C
H
L
T
U

The Reversed Array Of First String :
TRAEH

The Reversed Array Of Second String :
HCTULC

Returned Value Is -1 You Can see Gabage At Below
--------------------------------
Process exited after 35.72 seconds with return value 4294967295
Press any key to continue . . .

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

OUTPUT 4 :


Enter Two Strings :
CLUTCH

CLUTCH



The Two Strings are : CLUTCH and CLUTCH


Enter Two Character Of To Find Its Position From Respetively String : C T


Position Of C In CLUTCH Is at Position 1




Position Of T In CLUTCH Is at Position 4

Enter Two Character Of To Delete Its Position From Respetively String : C       C


First String Without C is LUTH

Second String Without C is LUTH

Strings After Copied Are : CLUTCH       CLUTCH


Enter Number Till You Want To Copy String :3


Strings After Copied Are : CLU  CLU

Length Of First String : 6

Length Of Second String : 6

The Sorted Array Of First String :

C
C
H
L
T
U

The Sorted Array Of Second String :

C
C
H
L
T
U

The Reversed Array Of First String :
HCTULC

The Reversed Array Of Second String :
HCTULC

Returned Value Is 0 You Can see It Below
--------------------------------
Process exited after 30.6 seconds with return value 0
Press any key to continue . . .


----------------------------------------------------------------------------*/
