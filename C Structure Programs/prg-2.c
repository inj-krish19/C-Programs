/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 SUBJECT - PROGRAM OF STRUCTURES
 PRG - 2.	Create a structure of employee with its fields as 
			name, age, work experience, gender, salary and hometown.
 			Write a ‘C’ program accept data for 50 employees. 
				a.	Display data of all employees 
				whose salary is more than 50000.
				b.	Count number of female employees
				and display the count.
				c.	Count number of employees 
				whose hometown is not ‘Ahmedabad’.
				d.	Update salary by 10% of all employees 
				whose work experience is more than 15 years.*/
#include<stdio.h>
#include<string.h>
#define data 50

main()
{
	struct employee
	{
		char name[20];
		char gender[10];
		char town[20];
		char wexp[10];
		int exp;
		int age;
		long int salary;
	}emp[data];
	int i,j,k,l,x;
	printf("\nEnter Data of %d Employees",data);
	for(i=0;i<data;i++)
	{
		printf("\nEMPLOYEE %d",i+1);
		printf("\nEnter Employee Name : ");
		scanf("%s",emp[i].name);
		getchar();//*
		printf("\nEnter Employee Gender : ");
		scanf("%s",emp[i].gender);
		getchar();
		printf("\nEnter Employee Hometown : ");
		scanf("%s",emp[i].town);
		getchar();
		printf("\nEnter Employee Work Expeirence (In Good Or Bad): ");
		scanf("%s",emp[i].wexp);
		getchar();
		printf("\nEnter Employee Work Expeirence (In Years): ");
		scanf("%d",&emp[i].exp);
		printf("\nEnter Employee Age : ");
		scanf("%d",&emp[i].age);
		printf("\nEnter Employee Salary : ");
		scanf("%ld",&emp[i].salary);
	}
	for(i=0;i<data;i++)
	{
		printf("\nEMPLOYEE %d",i+1);
		printf("\nEnter Employee %d Name : %s",i+1,emp[i].name);
		printf("\nEnter Employee %d Gender : %s",i+1,emp[i].gender);
		printf("\nEnter Employee %d Hometown : %s",i+1,emp[i].town);
		printf("\nEnter Employee %d Work Expeirence (In Good Or Bad): %s",i+1,emp[i].wexp);
		printf("\nEnter Employee %d Work Expeirence (In Years): %d",i+1,emp[i].exp);
		printf("\nEnter Employee %d Age : %d",i+1,emp[i].age);
		printf("\nEnter Employee %d Salary : %ld",i+1,emp[i].salary);
	}
//	a.	Display data of all employees whose salary is more than 50000.
	printf("\n\n\n\nQUESTION 1 :\nDisplay data of all employees whose salary is more than 50000.\n\n");
	for(i=0;i<data;i++)
	{
		if(emp[i].salary >= 50000)
		{
			printf("\nEMPLOYEE %d",i+1);
			printf("\nEnter Employee %d Name : %s",i+1,emp[i].name);
			printf("\nEnter Employee %d Gender : %s",i+1,emp[i].gender);
			printf("\nEnter Employee %d Hometown : %s",i+1,emp[i].town);
			printf("\nEnter Employee %d Work Expeirence (In Good Or Bad): %s",i+1,emp[i].wexp);
			printf("\nEnter Employee %d Work Expeirence (In Years): %d",i+1,emp[i].exp);
			printf("\nEnter Employee %d Age : %d",i+1,emp[i].age);
			printf("\nEnter Employee %d Salary : %ld",i+1,emp[i].salary);
		}
		else
		{
			printf("\nEmployee %d 's Salary Is Less Than 50K !",i+1);
		}
	}
//	b.	Count number of female employees and display the count.
	printf("\n\n\n\nQUESTION 2 :\nCount number of female employees and display the count.\n\n");
	j=0;
	for(i=0;i<data;i++)
	{
		if( strcmp(emp[i].gender,"FEMALE")==0 || strcmp(emp[i].gender,"female")==0)
		{
			j++;
		}
		else if( strcmp(emp[i].gender,"MALE")==0 || strcmp(emp[i].gender,"male")==0)
		{
			k++;
		}
		else
		{
			l++;
		}
	}
	printf("\nFemale Employees Are %d",j);
	printf("\nMale Employees Are %d",k);
	printf("\nOthers Employees Are %d",l);
//	c.	Count number of employees whose hometown is not ‘Ahmedabad’.
	printf("\n\n\n\nQUESTION 3 :\nCount number of employees whose hometown is not %cAhmedabad.%c\n\n",39,39);
	j=0;
	for(i=0;i<data;i++)
	{
		if( strcmp(emp[i].town,"AHMEDABAD")== 0 || strcmp(emp[i].town,"ahmedabad") == 0)
		{
			j++;
		}
	}
	printf("\nEmployees Not From Ahmedabad Are %d",data-j);


//	d.	Update salary by 10% of all employees whose work experience is more than 15 years.
	printf("\n\n\n\nQUESTION 4 :\nUpdate salary by 10 %c of all employees whose work experience is more than 15 years.\n\n",37);
	for(i=0;i<data;i++)
	{
		if( emp[i].exp >= 15 )
		{
			x = emp[i].salary /10 ;
			emp[i].salary = emp[i].salary + x ;
			printf("\nRenewed Salary Of Employee %d Is %d",i+1,emp[i].salary);
		}
		else 
		{
			printf("\nRenewed Salary Of Employee %d Is %d",i+1,emp[i].salary);
		}
	}
printf("\n\n\n\n------THE END------\n\n\n");
}

