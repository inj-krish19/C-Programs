/*NAME - SHAH KRISH J . 
ROLL NP . - 47
SUBJECT - FOP 
COURSE - COMPUTER SCIENCE
SEM - I
ASSIGNMENT OF STRING ARRAY
---------------------------------------------------------------------------------------------
QUESTION - 4) First name , middle name and last names are stored in three different arrays. 
	        Write a program to merge them and store in a single array. 
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int a[15],b[15],c[15],i,n1,n2,n3,com[45] ;
    clrscr();
    printf("Enter 3 strings [CAPCITY = 15]\n");
    printf("Enter First Name:");
    gets(a[15]);
    printf("\nEnter Middle Name:");
    gets(b[15]);
    printf("\nEnter Last Name:");
    gets(c[15]);
    printf(" 1st String :");
    printf("%s",a[15]);
    printf("\n2nd String :");
    printf("%s",b[15]);
    printf("\n3rd String :");
    printf("%s",c[15]);
    com[45]=a[15]+b[15]+c[15];
    printf("Combination Of All String Is :\n%s",com[45]);
    getch();
    return 0;
}

/*

 OUTPUT :

Enter 3 strings [CAPCITY = 15]
Enter First Name:SHAH
Enter Middle Name:KRISH
Enter Last Name:JAGDISHBHAI
1st String : SHAH
2nd String : KRISH
3rd String : JAGDISHBHAI
Combination Of All String Is :
SHAH KRISH JAGDISHBHAI
*/