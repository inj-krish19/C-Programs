/*NAME - SHAH KRISH J . 
ROLL NP . - 47
SUBJECT - FOP 
COURSE - COMPUTER SCIENCE
SEM - I
ASSIGNMENT OF STRING ARRAY
---------------------------------------------------------------------------------------------
QUESTION - 8)  Write a program to count frequency of a given letter in a given text.  
---------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100];
  	int i;
  	int freq[256] = {0};
      clrscr(); 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	for(i = 0; str[i] != '\0'; i++)
  	{
  		freq[str[i]]++;
	}	
  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] != 0)
		{
			printf("Character '%c' Occurs %d Times \n", i, freq[i]);
		}
	}
      getch();
  	return 0;
}


/*
OUTPUT :

Please Enter any String :  Tutorial Gateway
Character 'a' Occurs 3 Times 
Character 'e' Occurs 1 Times 
Character 'g' Occurs 1 Times 
Character 'i' Occurs 1 Times 
Character 'l' Occurs 1 Times 
Character 'o' Occurs 1 Times 
Character 'r' Occurs 1 Times 
Character 't' Occurs 3 Times 
Character 'u' Occurs 1 Times 
Character 'w' Occurs 1 Times 
Character 'y' Occurs 1 Times 

*/