/*NAME - SHAH KRISH J . 
ROLL NP . - 47
SUBJECT - FOP 
COURSE - COMPUTER SCIENCE
SEM - I
ASSIGNMENT OF STRING ARRAY
---------------------------------------------------------------------------------------------
QUESTION - 3) Print alphabet set in decimal and character form.
---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

main()
{
char chr;
clrscr();
printf("\n");
for(chr=65;chr<=122;chr=chr+1)
 {
  if (chr>90 && chr<97)
  {
   continue;
  }
  printf("[%2d = %c]\n",chr,chr);
 }
 getch();
 return 0;
}

/*

OUTPUT :


[99 = c]
[100 = d]                                                                         
[101 = e]                                                                         
[102 = f]                                                                         
[103 = g]                                                                         
[104 = h]                                                                         
[105 = i]                                                                         
[106 = j]                                                                         
[107 = k]                                                                         
[108 = l]                                                                         
[109 = m]                                                                         
[110 = n]                                                                         
[111 = o]                                                                         
[112 = p]                                                                         
[113 = q]                                                                         
[114 = r]                                                                         
[115 = s]
[116 = t]
[117 = u]
[118 = v]
[119 = w]
[120 = x]
[121 = y]
[122 = z]

 */