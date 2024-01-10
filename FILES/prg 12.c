/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF FILES
 
QUE - 12.)	Use a structure of Employee to write records of employee to a file.
			Include a menu that will allow the user to select any of the following features 
				a. ) Add a new record.
				b. ) Delete a record.
				c. ) Modify an existing record.
				d. ) Retrieve and display an entire record for a given name.
				e. ) Generate a complete list of all names, addresses and  telephone numbers.
				f. ) End of the computation.
  
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	int i,n;
	fp = fopen("employee_data.txt","r");
	char c,asked[10],choice;
	
		struct data {
			int id;
			char name[10];
			char city[10];
			long long int t_no;
			int age;
	}emp[6];
	
	printf("Current Data : \n\n");
	
	for(i=0;(c = fgetc(fp)) != EOF;i++)
	{
		fscanf(fp,"\n%d\n%s\n%s\n%lld\n%d",&emp[i].id,emp[i].name,emp[i].city,&emp[i].t_no,&emp[i].age);
		printf("\n\nData %d : \n",i+1);
		printf("\nEmployee %d Id : %d",i+1,emp[i].id);
		printf("\nEmployee %d Name : %s",i+1,emp[i].name);
		printf("\nEmployee %d City : %s",i+1,emp[i].city);
		printf("\nEmployee %d Telephone Number : %lld",i+1,emp[i].t_no);
		printf("\nEmployee %d Age : %d",i+1,emp[i].age);
//	printf("\n%d\n%s\n%s\n%lld\n%d\n",emp[i].id,emp[i].name,emp[i].city,emp[i].t_no,emp[i].age);
	}
	fclose(fp);
	
	printf("\n\n\n\n\na. ) Add a new record. \nb. ) Delete a record. \nc. ) Modify an existing record. \nd. ) Retrieve and display an entire record for a given name. \ne. ) Generate a complete list of all names, addresses and  telephone numbers. \nf. ) End of the computation.\n\n\n\nEnter Choice : ");
	scanf("%c",&choice);
	
	switch(choice)
	{	
		
	case 'a' :	//A
	case 'A' :	//a
						printf("\n\nEnter New Record :\n");
						printf("\nEmployee %d Id : ",i+1);
						scanf("%d",&emp[i].id);
						printf("\nEmployee %d Name : ",i+1);
						scanf("%s",emp[i].name);
						printf("\nEmployee %d City : ",i+1);
						scanf("%s",emp[i].city);
						printf("\nEmployee %d Telephone Number : ",i+1);
						scanf("%lld",&emp[i].t_no);
						printf("\nEmployee %d Age : ",i+1);
						scanf("%d",&emp[i].age);
						printf("\nNew Record Inserted Successfully\n");
						printf("\nAfter Entering New Record : \n");
						for(i=0;i<6;i++)
						{
							printf("\n\n\n");
							printf("\nEmployee %d Id : %d",i+1,emp[i].id);
							printf("\nEmployee %d Name : %s",i+1,emp[i].name);
							printf("\nEmployee %d City : %s",i+1,emp[i].city);
							printf("\nEmployee %d Telephone Number : %lld",i+1,emp[i].t_no);
							printf("\nEmployee %d Age : %d",i+1,emp[i].age);
						}	
						break ;
		
	case 'b' :	//B
	case 'B' :	//b
						printf("\n\nEnter Number to Remove Record :");
						scanf("%d",&n);
						if(n >5)
						{
							printf("\nInvalid Choice Of Deleting Record");
						}
						else
						{
							if(n != 1)
								n = n - 1;
							else
								n = 0;
							for(i=0;i<5;i++)
							{
								if(i = n)
								{																								
									emp[i] = emp[i+1];
									n++;
								}
							}	
							if(n <= 5)
							{
								for(i=0;i<4;i++)
								{
									printf("\n\n\n");
									printf("\nEmployee %d Id : %d",i+1,emp[i].id);
									printf("\nEmployee %d Name : %s",i+1,emp[i].name);
									printf("\nEmployee %d City : %s",i+1,emp[i].city);
									printf("\nEmployee %d Telephone Number : %lld",i+1,emp[i].t_no);
									printf("\nEmployee %d Age : %d",i+1,emp[i].age);
								}
							}
							else
							{
								for(i=0;i<5;i++)
								{
									printf("\n\n\n");
									printf("\nEmployee %d Id : %d",i+1,emp[i].id);
									printf("\nEmployee %d Name : %s",i+1,emp[i].name);
									printf("\nEmployee %d City : %s",i+1,emp[i].city);
									printf("\nEmployee %d Telephone Number : %lld",i+1,emp[i].t_no);
									printf("\nEmployee %d Age : %d",i+1,emp[i].age);
								}
							}
						}
						break ;
	
	case 'c' :	//C
	case 'C' :	//c
						printf("\nEnter Number Which Record You Want To Modify : ");
						scanf("%d",&n);
						if(n >5)
						{
							printf("\nInvalid Choice Of Modifing Record");
						}
						else
						{
							for(i=0;i<5;i++)
							{
								if(i == n-1)
								{	
									printf("\nNow You Can Modify Your Program ");
									printf("\nEmployee %d Id : ",i+1);
									scanf("%d",&emp[i].id);
									printf("\nEmployee %d Name : ",i+1);
									scanf("%s",emp[i].name);
									printf("\nEmployee %d City : ",i+1);
									scanf("%s",emp[i].city);
									printf("\nEmployee %d Telephone Number : ",i+1);
									scanf("%lld",&emp[i].t_no);
									printf("\nEmployee %d Age : ",i+1);
									scanf("%d",&emp[i].age);
									printf("\nNew Record Inserted Successfully\n");
									printf("\nAfter Entering New Record : \n");
								}
							}
							for(i=0;i<5;i++)
							{
								printf("\n\n\n");
								printf("\nEmployee %d Id : %d",i+1,emp[i].id);
								printf("\nEmployee %d Name : %s",i+1,emp[i].name);
								printf("\nEmployee %d City : %s",i+1,emp[i].city);
								printf("\nEmployee %d Telephone Number : %lld",i+1,emp[i].t_no);
								printf("\nEmployee %d Age : %d",i+1,emp[i].age);
							}
						}
						break ;
		
	case 'd' :	//D
	case 'D' :	//d
						printf("\nEnter Name Whose Record You Want To Modify : ");	
						scanf("%s",asked);
							
						n = 0;	
						for(i=0;i<5;i++)
						{
								if(strcmp(emp[i].name,asked) == 0)
								{
									printf("\n\n\n");
									printf("\nEmployee %d Id : %d",i+1,emp[i].id);
									printf("\nEmployee %d Name : %s",i+1,emp[i].name);
									printf("\nEmployee %d City : %s",i+1,emp[i].city);
									printf("\nEmployee %d Telephone Number : %lld",i+1,emp[i].t_no);
									printf("\nEmployee %d Age : %d",i+1,emp[i].age);
								}
								else
								{
									n++;
								}
						}	
						if(i == n)
						{
							printf("\nRecord Not Found");
						}
						break;
	
	case 'e' :	//E
	case 'E' :	//e
						for(i=0;i<5;i++)
						{
							printf("\n\n\n");
							printf("\nEmployee %d Id : %d",i+1,emp[i].id);
							printf("\nEmployee %d Name : %s",i+1,emp[i].name);
							printf("\nEmployee %d City : %s",i+1,emp[i].city);
							printf("\nEmployee %d Telephone Number : %lld",i+1,emp[i].t_no);
							printf("\nEmployee %d Age : %d",i+1,emp[i].age);
						}	
						break;								
						
	case 'f' :	//F
	case 'F' :	//f
						printf("\nYou Have Reached End Of Program");
						exit(0);
						break ;
						
	default :
						printf("\nInvalid Choice");
						exit(0);
						break;
	}
	
}
/*	

FILE :

------------------------------------------------------------------------------

101
VISHAL
AHMEDABAD
9874563209
25

105
MOHIT 
BANGLORE
4374543423
22


112
JARIWALA
SURAT
3686433464
28


125
DEV
AHMEDABAD
8064313464
25


137
PRINCE
KARACHI
6320978953
47

------------------------------------------------------------------------------

OUTPUT :

------------------------------------------------------------------------------

TRY 1:

**********************************

Current Data :



Data 1 :

Employee 1 Id : 101
Employee 1 Name : VISHAL
Employee 1 City : AHMEDABAD
Employee 1 Telephone Number : 9874563209
Employee 1 Age : 25

Data 2 :

Employee 2 Id : 105
Employee 2 Name : MOHIT
Employee 2 City : BANGLORE
Employee 2 Telephone Number : 4374543423
Employee 2 Age : 22

Data 3 :

Employee 3 Id : 112
Employee 3 Name : JARIWALA
Employee 3 City : SURAT
Employee 3 Telephone Number : 3686433464
Employee 3 Age : 28

Data 4 :

Employee 4 Id : 125
Employee 4 Name : DEV
Employee 4 City : AHMEDABAD
Employee 4 Telephone Number : 8064313464
Employee 4 Age : 25

Data 5 :

Employee 5 Id : 137
Employee 5 Name : PRINCE
Employee 5 City : KARACHI
Employee 5 Telephone Number : 6320978953
Employee 5 Age : 47




a. ) Add a new record.
b. ) Delete a record.
c. ) Modify an existing record.
d. ) Retrieve and display an entire record for a given name.
e. ) Generate a complete list of all names, addresses and  telephone numbers.
f. ) End of the computation.



Enter Choice : A


Enter New Record :

Employee 6 Id : 147

Employee 6 Name : ROHIT

Employee 6 City : AHMEDABAD

Employee 6 Telephone Number : 2394793254

Employee 6 Age : 22

New Record Inserted Successfully

After Entering New Record :




Employee 1 Id : 101
Employee 1 Name : VISHAL
Employee 1 City : AHMEDABAD
Employee 1 Telephone Number : 9874563209
Employee 1 Age : 25



Employee 2 Id : 105
Employee 2 Name : MOHIT
Employee 2 City : BANGLORE
Employee 2 Telephone Number : 4374543423
Employee 2 Age : 22



Employee 3 Id : 112
Employee 3 Name : JARIWALA
Employee 3 City : SURAT
Employee 3 Telephone Number : 3686433464
Employee 3 Age : 28



Employee 4 Id : 125
Employee 4 Name : DEV
Employee 4 City : AHMEDABAD
Employee 4 Telephone Number : 8064313464
Employee 4 Age : 25



Employee 5 Id : 137
Employee 5 Name : PRINCE
Employee 5 City : KARACHI
Employee 5 Telephone Number : 6320978953
Employee 5 Age : 47



Employee 6 Id : 147
Employee 6 Name : ROHIT
Employee 6 City : AHMEDABAD
Employee 6 Telephone Number : 2394793254
Employee 6 Age : 22


----------------------------------------------------------------------------------



TRY 2:



**********************************

Current Data :



Data 1 :

Employee 1 Id : 101
Employee 1 Name : VISHAL
Employee 1 City : AHMEDABAD
Employee 1 Telephone Number : 9874563209
Employee 1 Age : 25

Data 2 :

Employee 2 Id : 105
Employee 2 Name : MOHIT
Employee 2 City : BANGLORE
Employee 2 Telephone Number : 4374543423
Employee 2 Age : 22

Data 3 :

Employee 3 Id : 112
Employee 3 Name : JARIWALA
Employee 3 City : SURAT
Employee 3 Telephone Number : 3686433464
Employee 3 Age : 28

Data 4 :

Employee 4 Id : 125
Employee 4 Name : DEV
Employee 4 City : AHMEDABAD
Employee 4 Telephone Number : 8064313464
Employee 4 Age : 25

Data 5 :

Employee 5 Id : 137
Employee 5 Name : PRINCE
Employee 5 City : KARACHI
Employee 5 Telephone Number : 6320978953
Employee 5 Age : 47




a. ) Add a new record.
b. ) Delete a record.
c. ) Modify an existing record.
d. ) Retrieve and display an entire record for a given name.
e. ) Generate a complete list of all names, addresses and  telephone numbers.
f. ) End of the computation.



Enter Choice : D

Enter Name Whose Record You Want To Modify : KRISH

Record Not Found

----------------------------------------------------------------------------------



TRY 3:



**********************************

Current Data :



Data 1 :

Employee 1 Id : 101
Employee 1 Name : VISHAL
Employee 1 City : AHMEDABAD
Employee 1 Telephone Number : 9874563209
Employee 1 Age : 25

Data 2 :

Employee 2 Id : 105
Employee 2 Name : MOHIT
Employee 2 City : BANGLORE
Employee 2 Telephone Number : 4374543423
Employee 2 Age : 22

Data 3 :

Employee 3 Id : 112
Employee 3 Name : JARIWALA
Employee 3 City : SURAT
Employee 3 Telephone Number : 3686433464
Employee 3 Age : 28

Data 4 :

Employee 4 Id : 125
Employee 4 Name : DEV
Employee 4 City : AHMEDABAD
Employee 4 Telephone Number : 8064313464
Employee 4 Age : 25

Data 5 :

Employee 5 Id : 137
Employee 5 Name : PRINCE
Employee 5 City : KARACHI
Employee 5 Telephone Number : 6320978953
Employee 5 Age : 47




a. ) Add a new record.
b. ) Delete a record.
c. ) Modify an existing record.
d. ) Retrieve and display an entire record for a given name.
e. ) Generate a complete list of all names, addresses and  telephone numbers.
f. ) End of the computation.



Enter Choice : E




Employee 1 Id : 101
Employee 1 Name : VISHAL
Employee 1 City : AHMEDABAD
Employee 1 Telephone Number : 9874563209
Employee 1 Age : 25



Employee 2 Id : 105
Employee 2 Name : MOHIT
Employee 2 City : BANGLORE
Employee 2 Telephone Number : 4374543423
Employee 2 Age : 22



Employee 3 Id : 112
Employee 3 Name : JARIWALA
Employee 3 City : SURAT
Employee 3 Telephone Number : 3686433464
Employee 3 Age : 28



Employee 4 Id : 125
Employee 4 Name : DEV
Employee 4 City : AHMEDABAD
Employee 4 Telephone Number : 8064313464
Employee 4 Age : 25



Employee 5 Id : 137
Employee 5 Name : PRINCE
Employee 5 City : KARACHI
Employee 5 Telephone Number : 6320978953
Employee 5 Age : 47


----------------------------------------------------------------------------------

TRY 4:


**********************************

Current Data :



Data 1 :

Employee 1 Id : 101
Employee 1 Name : VISHAL
Employee 1 City : AHMEDABAD
Employee 1 Telephone Number : 9874563209
Employee 1 Age : 25

Data 2 :

Employee 2 Id : 105
Employee 2 Name : MOHIT
Employee 2 City : BANGLORE
Employee 2 Telephone Number : 4374543423
Employee 2 Age : 22

Data 3 :

Employee 3 Id : 112
Employee 3 Name : JARIWALA
Employee 3 City : SURAT
Employee 3 Telephone Number : 3686433464
Employee 3 Age : 28

Data 4 :

Employee 4 Id : 125
Employee 4 Name : DEV
Employee 4 City : AHMEDABAD
Employee 4 Telephone Number : 8064313464
Employee 4 Age : 25

Data 5 :

Employee 5 Id : 137
Employee 5 Name : PRINCE
Employee 5 City : KARACHI
Employee 5 Telephone Number : 6320978953
Employee 5 Age : 47




a. ) Add a new record.
b. ) Delete a record.
c. ) Modify an existing record.
d. ) Retrieve and display an entire record for a given name.
e. ) Generate a complete list of all names, addresses and  telephone numbers.
f. ) End of the computation.



Enter Choice : F

You Have Reached End Of Program

----------------------------------------------------------------------------------*/