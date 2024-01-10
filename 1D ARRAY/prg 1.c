/*

NAME - SHAH KRISH J . 

PROGRAM OF 1D ARRAYS
----------------------------------------------------------------------------------------
QUESTION :

Accept an array of first 50 even numbers and do the following operations

1.	Add all the terms
2.	Update 6’th term by its square
3.	Add 9’th and 12’th number and save in 19’th number.
4.	Find maximum
5.	Find minimum
6.	Exchange values of 13’th and 17’th numbers.
7.	Divide 30’th number by 12’th number and store in 19’th number.

-----------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  
  //QUESTION -1//
  long int j,i,b[100],first=0,max=0,min,temp;
  clrscr();
  
  for(j=1,i=0;;j++){
    if(j%2==0){
      b[i]=j;
      i++;
      if(i==50){
        break;
      }
    }
  }	

  for(i=1;i<=50;i++){
    printf("%ld\n",b[i]);
    first=first+b[i];
  }
  printf("The Sum of First 50 Even Numbers is %ld.\n",first);
  
  // QUESTION - 2//
  b[6]=b[6]*b[6];
  printf("The Square of 6th Term is %ld.\n",b[6]);
  
  // QUESTION - 3//
  b[19]=b[9]+b[12];
  printf("The Sum Of 9th and 12th Term is %ld which is stored in 19th Term\n",b[19]);
  
  // QUESTION - 4//
  for(i=1;i<=50;i++){
    if(max<b[i]){ 
      max=b[i];
    }
  }
  printf("The Maximum Number in Array is %ld.\n",max);
  
  // QUESTION - 5//
  for(i=1;i<=50;i++){
    if(min>b[i]){
      min=b[i];
    }
  }
  printf("The Minimum Number in Array is %ld.\n",min);
  
  // QUESTION - 6 //
  for(i=1;i<=50;i++)
  {
    printf("%ld\t",b[i]);
  }
  
  printf("Before Exchange Value Of 13th Term was %ld\n",b[13]);
  printf("Before Exchange Value Of 17th Term was %ld\n",b[17]);
  
  temp=b[13];
  b[13]=b[17];
  b[17]=temp;
 
  printf("After Exchange Value Of 13th term is %ld.\n",b[13]);
  printf("After Exchange Value Of 17th term is %ld.\n",b[17]);
  
  // QUESTION - 7 //
  b[19]=b[30]/b[12];
  printf("Dividing 30th Term By 12th Term and Storing in 19th Term and Answer is %ld.\n",b[19]);

  getch();
  return 0;

}
