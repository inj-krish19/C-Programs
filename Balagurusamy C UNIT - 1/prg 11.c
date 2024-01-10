NAME-SHAH KRISH J.
ROLL NO.-47
COURCE-COMPUTER SCIENCE
SUBJECT-FOP
PROGRAM -1ST ASSIGNMENT(11)

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int x1,x2,y1,y2,g,f,j,k,D;
 clrscr();
 printf("ENTER THE VALUE OF x1:");
 scanf("%d",&x1);
 printf("ENTER THE VALUE OF x2:");
 scanf("%d",&x2);
 printf("ENTER THE VALUE OF y1:");
 scanf("%d",&y1);
 printf("ENTER THE VALUE OF y2:");
 scanf("%d",&y2);
 g=(x2-x1);
 f=g*g;
 j=(y2-y1);
 k=j*j;
 D=f+k;
 printf("Diatance between both is %d",D);
 getch();
 return 0;
}