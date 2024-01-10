NAME-SHAH KRISH J.
ROLL NO.-47
COURCE-COMPUTER SCIENCE
SUBJECT-FOP
PROGRAM -1ST ASSIGNMENT(10)

#include<stdio.h>
 #include<conio.h>
 #include<math.h> 
int main()
 { 
int a=10,b=30,c=30,s,x,y,z,area;
float g;
clrscr(); 
s=(a+b+c)/2; 
printf("S is %d\n",s); 
x=(s-a); 
y=(s-b); 
z=(s-c); 
area=s*x*y*z;
g=sqrt(area); 
printf("AREA OF TRIANGLE IS :%f",g); 
getch(); 
return 0; 
}