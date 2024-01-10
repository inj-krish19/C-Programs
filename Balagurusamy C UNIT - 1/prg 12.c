NAME-SHAH KRISH J.
ROLL NO.-47
COURCE-COMPUTER SCIENCE
SUBJECT-FOP
PROGRAM -1ST ASSIGNMENT(12)

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main()
{
 int x1=0,x2=4,y1=0,y2=5,g,f,j,k,D;
 float r=2.5,AREA,perimeter;
 clrscr();
 printf("THE VALUE OF x1:0\n");
 printf("THE VALUE OF x2:4\n");
 printf("THE VALUE OF y1:0\n");
 printf("THE VALUE OF y2:5\n");
 g=(x2-x1);
 f=g*g;
 j=(y2-y1);
 k=j*j;
 D=k-f;
 printf("25 - 16 =%d\n",D);
 printf("NOW ITS THIRD SIDE SIZE IS 3 BUT ITS NOT REQUIRED AT ALL.\n");
 printf("SO RADIUS OF CIRCLE WILL BE 5/2=2.5\n");
 AREA=PI*r*r;
 printf("\n\n\nAREA OF CIRCLE IS %f",AREA);
 perimeter=2*r*PI;
 printf("\n\n\n\PERIMETER OF CIRCLE IS %f",perimeter);
 getch();
 return 0;
}