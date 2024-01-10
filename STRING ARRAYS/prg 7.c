/*NAME - SHAH KRISH J . 
ROLL NP . - 47
SUBJECT - FOP 
COURSE - COMPUTER SCIENCE
SEM - I
ASSIGNMENT OF STRING ARRAY
---------------------------------------------------------------------------------------------
QUESTION - 7)	Write a program to count words in a text.
---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
      clrscr();
	int i,alpha,digit,spell;
	i=alpha=digit=spell=0;

	printf("\nPlease Enter any string :");
	gets(str);

	while(str[i]!= '\0')
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			alpha++;
		}
		else if (str[i]>='0'||str[i]<='9')
		{
			digit++;
		}
		else
		{
			spell++;
		}
		i++;
	}
	printf("\n Number of Alphabets is this string : %d",alp);
	printf("\n Number of Digits is this string :  %d",digi);
	printf("\n Number of Special Characters is this string : %d",spe);
	getch();
      return 0;
}
/*

OUTPUT :


 Please Enter any string :KRISH@1902                                              
                                                                                
 Number of Alphabets is this string =5                                        
 Number of Digits is this string = 4
 Number of Special Characters is this string = 1
*/


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
