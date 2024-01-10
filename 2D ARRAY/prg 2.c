/*

NAME - SHAH KRISH J.
PROGRAM OF 2D ARRAYS 

---------------------------------------------------------------------------------------------

QUESTION - 2 ) Create a two dimension array for storing pollution index of 5 different cities,
		   during the 12 months of the year 2022. Give the following output.
a.Display average pollution index of each city.
b.For a given month display which city has the highest pollution.
c.For a given city display the month number which has 
  least pollution and the month number which has highest pollution.
d.Display the city number which had least average pollution index.

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
main()
{
   int pol[12][5],j,k,i,mx=0,minu=0,max=0;
   float avg;
   clrscr();
   
   printf("\nEnter 5 cities , 12 months pollution index");
   for (j=0;j<5;j++){
      printf("\n\nCity %d :\n\n",j+1);
      for(k=0;k<12;k++){
         avg=0;
         i=0;
         printf("\nMonth %d : ",k+1);
         scanf("%d",&pol[k][j]);
         i=i+pol[k][j];
      }
      avg=i/12;
      printf("\nAVERAGE is %f",avg);
   }

   //QUESTION - 2
   for(j=0;j<5;j++){
      if(max<pol[0][j]){
         max=pol[0][j];
         printf("\nHIGHEST POLLUTION IS :%d",max);
      }
   }
   
   //QUESTION - 3
   for(k=0;k<12;k++){
      if(mx<pol[k][0])
      {
         mx=pol[k][0];
         printf("\nHIGHEST POLLUTION IN MONTH :%d",k+1);
      }
   }

   for(k=0;k<12;k++){
      if(minu>pol[k][0]){
         minu=pol[k][0];
         printf("\nLOWEST POLLUTION IN MONTH :%d",k+1);
      }
   }
   
   // QUESTION - 4
   for(j=0;j<12;j++){
      for(k=0;k<5;k++){
         if(minu==pol[k][j]){
            printf("\nLEAST AVERAGE IN CITY IS : %d",j+1);
            printf("\nINDEX : %d",pol[k][j]);
         }
      }
   }
   
   getch();
   return 0;
}