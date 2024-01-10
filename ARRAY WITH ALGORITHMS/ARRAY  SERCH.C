#include<stdio.h>
#include<conio.h>

main()

{
	int arr[100],i,n;
	int j,tem;
	clrscr();
	printf("Enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			    printf("arr[%d]=",i);
	scanf("%d",&arr[i]);
	}
	printf("\nenter your  number bro we can find your index number\n");

	scanf("%d",&tem);

	 for(i=0;i<n;i++)
	   {
	    if(tem==arr[i])
	  {
	  printf("arr[%d] : %d",i,arr[i]);
	   }

	   else
	   {
	    printf("not bcd mcd");
	    break;
	   }
	    }


	getch();
 }
