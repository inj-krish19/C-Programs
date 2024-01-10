/*NAME - SHAH KRISH J . 
ROLL NP . - 47
SUBJECT - FOP 
COURSE - COMPUTER SCIENCE
SEM - I
ASSIGNMENT OF STRING ARRAY
---------------------------------------------------------------------------------------------
QUESTION - 6)  Write a program to compare two strings using loop.
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
  char str1[20], str2[20];
  int i;
  clrscr();
  printf("Enter the first string: ");
  gets(str1);
  printf("Enter the second string: ");
  gets(str2);  
  for(i = 0; str1[i] == str2[i] && str1[i] == '\0'; i++);
  {
  if(str1[i] > str2[i])
  {
    printf(" Both string are not equal.\n");
  }
  else if(str1[i] < str2[i])
  {
    printf(" Both string are not equal.\n");
  }
  else
  {
    printf(" Both string are equal.\n");
  }
  }
  getch();
  return 0;
}


/*

OUTPUT :


Enter the first string: CPROGRAMMING
Enter the second string: BALAGURUSAMY
Both string are not equal.

*/