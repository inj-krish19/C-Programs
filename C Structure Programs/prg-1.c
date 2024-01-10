/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 SUBJECT - PROGRAM OF STRUCTURES
 PRG - 1.	Structures and union programs discussed in last classes.*/
#include<stdio.h>
#include<conio.h>
main()
{
	struct abc
	{
		int a;
		char b;
		float c;
	}mo;             /*
	struct abcd
	{
		int a;
		char b;
		float c;
	}m;            */
	union bcd
	{
		int x;
		char y;
		float z;
	}vi;
	//clrscr();
	mo.a=19;
	printf("\nThe Value Is %d %c %f",mo.a,mo.b,mo.c);
	mo.b= 'M';
	printf("\nThe Value Is %d %c %f",mo.a,mo.b,mo.c);
	mo.c=99.99;
	printf("\nThe Value Is %d %c %f",mo.a,mo.b,mo.c);
	vi.x=19;
	printf("\nThe Value Is %d %c %f",vi.x,vi.y,vi.z);
	vi.y= 'V';
	printf("\nThe Value Is %d %c %f",vi.x,vi.y,vi.z);
	vi.z=99.99;
	printf("\nThe Value Is %d %c %f",vi.x,vi.y,vi.z);
	printf("\nThe Size Of Structure Is %d",sizeof(mo));
	printf("\nThe Size Of Union Is %d",sizeof(vi));
	printf("\n-----  STRUCTURE :-----");
	printf("\nStructure Is Int %d",sizeof(mo.a));
	printf("\nStructure Is Char %d",sizeof(mo.b));
	printf("\nStructure Is Float %d",sizeof(mo.c));
	printf("\n-------  UNION :-------");
	printf("\nUnion Is Int %d",sizeof(vi.x));
	printf("\nUnion Is Char %d",sizeof(vi.y));
	printf("\nUnion Is Float %d",sizeof(vi.z));
	getch();
}
