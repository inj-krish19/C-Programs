/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 SUBJECT - PROGRAM OF STRUCTURES
 		PRG - 3.		
	Create a structure of student with fields as name, age, last degree,
	percentage obtained in last degree, mobile no., and scholarship. 
	Write a ‘C’ program to create 100 students. 
	Write functions to do the following.
		a.	Give count of male and female students
		b.	Display data of all male students whose age is greater than 20.
		c.	Display list of students whose last degree is B.Sc
		d.	Assign scholarship based on following criteria
			i.	)	< 50% no scholarship
			ii.	)	>51% and <70% ,  20% scholarship
			iii.)	>71%  and < 90% ,  30% scholarship
			iv. )	>91% full scholarship.	*/
#include<stdio.h>
#define data 100
struct student
	{
		char name[20];
		char gen[10];
		char ldeg[20];
		int age;
		float per;
		float sch;
		long int mno;
	}std[data];

void gender()
{
	int i,a=0,b=0,c=0;
	printf("\n------------------------------------------------------------------------");
	for(i=0;i<data;i++)
	{
		if(strcmp(std[i].gen,"MALE")== 0 ||strcmp(std[i].gen,"male")== 0 )
		{
			a+=1;
		}
		else if(strcmp(std[i].gen,"FEMALE")== 0 ||strcmp(std[i].gen,"female")== 0 )
		{
			b+=1;
		}
		else
		{
			c+=1;
		}
	}
	printf("\n\n\n\n\nMale Are %d",a);
	printf("\nFemale Are %d",b);
	printf("\nOthers Are %d",c);
}
void number()
{
	int i,a=0;
	printf("\n------------------------------------------------------------------------");
	for(i=0;i<data;i++)
	{
		if(strcmp(std[i].gen,"MALE")== 0 ||strcmp(std[i].gen,"male")== 0 )
		{
			if(std[i].age >20)
			{
				a+=1;
			}
		}
	}
	printf("\n\n\n\n\nMale Students Whose Age Is Greater Than 20 Are %d",a);
}
void degree()
{	
	int i,a=0;
	printf("\n------------------------------------------------------------------------");
	printf("\n\n\n\n\nList Of Students Whose Last Degree Is %c B.sc %c",34,34);
		for(i=0;i<data;i++)
		{
			if(strcmp(std[i].ldeg,"B.Sc")== 0 ||strcmp(std[i].ldeg,"Bsc")== 0 ||strcmp(std[i].ldeg,"bsc")== 0)
			{
				a+=1;
				printf("\n\nStudent %d : %s",i+1,std[i].name);
			}
		}
	
}
void scholar()
{
	int i,sc;
	printf("\n------------------------------------------------------------------------");
	for(i=0;i<data;i++)
	{
		if(std[i].per >= 91)
		{
			printf("\n\n\nStudent %d Eligable For 100 %c Scholarship.",i+1,37);
		}
		else if(std[i].per >= 71)
		{
			printf("\n\n\nStudent %d Eligable For 30 %c Scholarship.",i+1,37);
		}
		else if(std[i].per >= 50)
		{
			printf("\n\n\nStudent %d Eligable For 20 %c Scholarship.",i+1,37);
		}
		else if (std[i].per < 50 )
		{
			printf("\n\n\nStudent %d Not Eligable For Scholarship.",i+1);
		}
	}
}
main()
{
/*	struct student
	{
		char name[20];
		char gen[10];
		char ldeg[20];
		int age;
		float per;
		float sch;
		long int mno;
	}std[data];*/
	int i;
	for(i=0;i<data;i++)
	{
		printf("\nSTUDENT %d : ",i+1);
		printf("\nEnter Student Name : ");
		scanf("%s",std[i].name);
		getchar();
		printf("\nEnter Student Gender : ");
		scanf("%s",std[i].gen);
		getchar();
		printf("\nEnter Student Last Degree : ");
		scanf("%s",std[i].ldeg);
		getchar();
		printf("\nEnter Student Age : ");
		scanf("%d",&std[i].age);
		//getchar();
		printf("\nEnter Student Percentage : ");
		scanf("%f",&std[i].per);
		//getchar();
		printf("\nEnter Student Mobile Number : ");
		scanf("%ld",&std[i].mno);
	}
/*	for(i=0;i<data;i++)
	{
		printf("\nSTUDENT %d : ",i+1);
		printf("\nStudent %d Name : %s",i+1,std[i].name);
		//getchar();
		printf("\nStudent %d Gender : %s",i+1,std[i].gen);
		printf("\nStudent %d Last Degree : %s",i+1,std[i].ldeg);
		//getchar();
		printf("\nStudent %d Age : %d",i+1,std[i].age);
		//getchar();
		printf("\nStudent %d Percentage : %f",i+1,std[i].per);
		//getchar();
		printf("\nStudent %d Mobile Number : %ld",i+1,std[i].mno);
	}*/
//	a.	Give count of male and female students
	printf("\n\n\n\n-------QUESTION - 1 : ------\n\nGive count of male and female students");
	gender();
//	b.	Display data of all male students whose age is greater than 20.
	printf("\n\n\n\n-------QUESTION - 2 : ------\n\nDisplay data of all male students whose age is greater than 20.");
	number();
//	c.	Display list of students whose last degree is B.Sc
	printf("\n\n\n\n-------QUESTION - 3 : ------\n\nDisplay list of students whose last degree is B.Sc");
	degree();
/*	d.	Assign scholarship based on following criteria
			i.	)	< 50% no scholarship
			ii.	)	>51% and <70% ,  20% scholarship
			iii.)	>71%  and < 90% ,  30% scholarship
			iv. )	>91% full scholarship.	*/
	printf("\n\n\n\n-------QUESTION - 4 : ------\n\nAssign scholarship based on following criteria");
			printf("\ni.	)	< 50%c no scholarship",37);
			printf("\nii.	)	>51%c and <70%c ,  20%c scholarship",37,37,37);
			printf("\niii.	)	>71%c and < 90%c ,  30%c scholarship",37,37,37);
			printf("\niv. 	)	>91%c full scholarship.",37);
	scholar();
}
