#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],n;
int i,k,j;
clrscr();
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("arr[%d]=",i);
scanf("%d",&arr[i]);
}
printf("enter your index number=");
scanf("%d",&k);

printf("\nenter your  number=");
scanf("%d",&j);
for(i=n;i>k;i--)
{

arr[i]=arr[i-1];
}
arr[k]=j;

for(i=0;i<=n;i++)
{
printf("arr[%d]=%d\n",i,arr[i]);

}
getch();
 }