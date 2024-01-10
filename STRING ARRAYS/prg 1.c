/*NAME - SHAH KRISH J . 
ROLL NP . - 47
SUBJECT - FOP 
COURSE - COMPUTER SCIENCE
SEM - I
ASSIGNMENT OF STRING ARRAY
---------------------------------------------------------------------------------------------
QUESTION - 1 ) Write a program to copy one string into another using loop.
---------------------------------------------------------------------------------------------*/
#include <stdio.h>
int main()
{
 char ch1[10];
 char ch2[10];
 int i;
 clrscr();
 printf("Enter 2 string:(Capacity 10): ");
 gets(ch1);
 printf("\t\t\t");
 gets(ch2);
 for(i=0; ch1[i]!='\0'; i++)
  {
   ch2[i] = ch1[i];
  }
 text2[i] = '\0';
 printf("First string : %s\n", ch1);
 printf("Second string : %s\n", ch2);
 printf("Total characters copied : %d\n", i);
 getch();
 return 0;
}

/*

OUTPUT :
Enter 2 string:(Capacity 10):SHAH KRISH    HI
First string :SHAH KRISH
Second string :SHAH KRISH
Total characters copied :10
*/