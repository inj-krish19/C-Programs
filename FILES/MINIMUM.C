#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter Value Of a:");
	scanf("%d",&a);
	printf("Enter Value Of b:");
	scanf("%d",&b);
	printf		("Enter Value Of c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		if(b>c)
		{
			printf("Max is %d\n",a);
			printf("Min is %d\n",c);
		 }
		 else
		 {
			printf("Max is %d\n",a);
			printf("Min is %d\n",b);
		 }

	 }
	 else if(b>c && b>a)
	 {
		if(c>a)
		{
			printf("Max is %d\n",b);
			printf("Min is %d\n",a);
		}
		else
		{
			printf("Max is %d\n",b);
			printf("Min is %d\n",c);
		}
	 }
	 else
	 {
		if(a>b)
		{
			printf("Max is %d\n",c);
			printf("Min is %d\n",b);
		}
		else
		{
			printf("Max is %d\n",c);
			printf("Min is %d\n",a);
		}
	 }
	 getch();
}



(MINIMUM.c)