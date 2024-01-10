/*
Name  -  Shah Krish J.

Roll No. -  47

Batch - 1

Subject - FOP

Assignment - 1

Question from List of programs.docx

-------------------------------------------------------------------------------



QUESTION -3)	Write a program to fond average of marks of a student.



------------------------------------------------------------------------------

CODE    */


#include<stdio.h>

#include<conio.h>

main()

{
    
int i,total=0,sub,num,ave;
    
clrscr();
    
for(i=1; i<=5; i++)
    
{
        
printf("Enter Marks :");
        
scanf("%d",&num);
        
total+=num;
        
ave=total/5;

    
}
    
printf("\nTotal of Marks Is: %d",total);
    
printf("\nAverage of Marks : %d",ave);
    
getch();
    
return 0;
}



/*
-------------------------------------------------------------------------------

Output 



Enter Marks :45

Enter Marks :45

Enter Marks :50

Enter Marks :55

Enter Marks :55


Total Marks Is: 250

Average of Marks :50


------------------------------------------------------------------------------   */