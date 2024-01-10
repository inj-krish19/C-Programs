/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 11.)	Write an interactive menu driven program that will access 
			the data file created in the above problem to do one of the following tasks: 
           		a)   Determine the telephone number of specific customers
           		b)   Determine the customer whose telephone no. is specified. 
          		c)   Add a new record.
          		d)   Delete a record
           		e)   Generate the listing of all the customers and their telephone numbers 
  
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int i,n,j;
	char ask[10],c,choice;
	long long int tele;
	FILE *fp;
	struct data {
		char name[10];
		long long int t_no;
	}kg[6];
	fp = fopen("data.txt","r");
	
	for(i=0;i<5;i++)
	{
		fscanf(fp,"%s\t%lld\n",&kg[i].name,&kg[i].t_no);
	}
	fclose(fp);
	printf("Current Data : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%s\t%lld\n",kg[i].name,kg[i].t_no);
	}
	
	
	printf("\na )   Determine the telephone number of specific customers\nb )   Determine the customer whose telephone no. is specified. \nc )   Add a new record. \nd )   Delete a record. \ne )   Generate the listing of all the customers and their telephone numbers\n\n\nEnter Choice : ");
	scanf("%c",&choice);
	
	
	switch(choice)
	{	
		
	case 'a' :	//A
	case 'A' :	//a
				
						printf("\n\nEnter Customer Name Whose Telephone Number You Want :");
						scanf("%s",ask);
						//gets(ask);
						/*if(ask > 5)
						{
							printf("\nNo Data Found");
						}*/
						for(i=0;i<5;i++)
						{
							if(strcmp(ask,kg[i].name) == 0)
							{
								printf("Customer %s 's Telephone Number is %lld\n",kg[i].name,kg[i].t_no);
							}
						}
						break ;
		
	case 'b' :	//B
	case 'B' :	//b
		
						printf("\n\nEnter Telephone Number Whose Name You Want To Know:");
						scanf("%lld",&tele);
	
						for(i=0;i<5;i++)
						{
							if(kg[i].t_no == tele )
							{
								printf("Telephone Number %lld is %s ",tele,kg[i].name);
								tele = 1;
							}
						}
						if(tele != 1)
						{
							printf("\nNo Data Found");		
						}
						break ;
	
	case 'c' :	//C
	case 'C' :	//c
	
						printf("\n\nEnter New Record :\n");
						printf("\nEnter Name :");
						scanf("%s",kg[5].name);
						printf("\nEnter Telephone Number :");
						scanf("%lld",&kg[5].t_no);
						printf("\nNew Record Inserted Successfully\n");
						printf("\nAfter Entering New Record : \n");
						for(i=0;i<6;i++)
						{
							printf("%s\t:%lld\n",kg[i].name,kg[i].t_no);
							if(i == 6)
								printf("%s:%lld\n",kg[i].name,kg[i].t_no);
						}	
						break ;
		
	case 'd' :	//D
	case 'D' :	//d
	
						printf("\n\nEnter Number to Remove Record :");
						scanf("%d",&n);
						if(n != 1)
							n = n - 1;
						else
							n = 0;
						for(i=0;i<5;i++)
						{
							if(i = n)
							{																								
								kg[i] = kg[i+1];
								n++;
							}
						}	
						if(n <= 5)
						{
							for(i=0;i<4;i++)
							{
								printf("%s\t:%lld\n",kg[i].name,kg[i].t_no);
							}
						}
						else
						{
							for(i=0;i<5;i++)
							{
								printf("%s\t:%lld\n",kg[i].name,kg[i].t_no);
							}
						}
						break ;
	
	case 'e' :	//E
	case 'E' :	//e
				
						for(i=0;i<5;i++)
						{
						printf("%s\t:%lld\n",kg[i].name,kg[i].t_no);
						/*if(i == 6)
							printf("%s:%lld\n",kg[i].name,kg[i].t_no);*/
						}	
						break ;
	default :
						printf("\nInvalid Choice");
						exit(0);
						break;
	}

}


/*


OUTPUT :

--------------------------------------------------------------------------

TRY 1 :

--------------------------------------------------------------------------

Current Data :

KRISH   5645646810
VISHAL  2314221223
MOHIT   8784213233
ROHIT   1234567879
PRINCE  1234547833

a )   Determine the telephone number of specific customers
b )   Determine the customer whose telephone no. is specified.
c )   Add a new record.
d )   Delete a record.
e )   Generate the listing of all the customers and their telephone numbers


Enter Choice : a


Enter Customer Name Whose Telephone Number You Want :VISHAL
Customer VISHAL 's Telephone Number is 2314221223

--------------------------------------------------------------------------

TRY 2 :

--------------------------------------------------------------------------

Current Data :

KRISH   5645646810
VISHAL  2314221223
MOHIT   8784213233
ROHIT   1234567879
PRINCE  1234547833

a )   Determine the telephone number of specific customers
b )   Determine the customer whose telephone no. is specified.
c )   Add a new record.
d )   Delete a record.
e )   Generate the listing of all the customers and their telephone numbers


Enter Choice : e
KRISH   :5645646810
VISHAL  :2314221223
MOHIT   :8784213233
ROHIT   :1234567879
PRINCE  :1234547833


--------------------------------------------------------------------------

FILE :

**************************

KRISH   5645646810
VISHAL  2314221223
MOHIT   8784213233
ROHIT   1234567879
PRINCE  1234547833

--------------------------------------------------------------------------*/