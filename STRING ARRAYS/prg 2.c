/*NAME - SHAH KRISH J . 
ROLL NP . - 47
SUBJECT - FOP 
COURSE - COMPUTER SCIENCE
SEM - I
ASSIGNMENT OF STRING ARRAY
---------------------------------------------------------------------------------------------
QUESTION - 2)	Display the following pattern
C
Co
Com
Comp
Compu
Comput
Compute
Computer
Compute
Comput
Compu
Comp
Com
Co
C

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
 char str1[]="computer";
 clrscr();
 int i,k,length;
 clrscr();
 len=strlen(str);
 for(i=0;i<length;i++)
 {
  for(k=0;k<i;k++)
  {
   printf("%c",str1[k]);
  }
  printf("\n");
 }
for(i=length;i>=0;i--)
{ 
 for(k=0;k<i;k++)
 {
  printf("%c",str1[k]);
 }
 printf("\n");
}
getch();
return 0;
}

/*

OUTPUT :

C
Co
Com
Comp
Compu
Comput
Compute
Computer
Compute
Comput
Compu
Comp
Com
Co
C

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

