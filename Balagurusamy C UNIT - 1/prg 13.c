NAME-SHAH KRISH J.
ROLL NO.-47
COURCE-COMPUTER SCIENCE
SUBJECT-FOP
PROGRAM -1ST ASSIGNMENT(13)

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main()
{
 int x1=2,x2=5,y1=2,y2=6,g,f,j,k,D;
 float r=2.5,AREA,perimeter;
 clrscr();
 printf("THE VALUE OF x1:2\n");
 printf("THE VALUE OF x2:5\n");
 printf("THE VALUE OF y1:2\n");
 printf("THE VALUE OF y2:6\n");
 g=(x2-x1);
 f=g*g;
 j=(y2-y1);
 k=j*j;
 D=f+k;
 printf("9 + 16 =%d\n",D);
 printf("NOW ITS SIZE IS root25 IT MEANS DIAMETER IS 5.\n");
 printf("SO RADIUS OF CIRCLE WILL BE 5/2=2.5\n");
 AREA=PI*r*r;
 printf("\n\n\nAREA OF CIRCLE IS %f",AREA);
 perimeter=2*r*PI;
 printf("\n\n\n\PERIMETER OF CIRCLE IS %f",perimeter);
 getch();
 return 0;
}