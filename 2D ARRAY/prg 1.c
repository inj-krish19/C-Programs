/*

NAME - SHAH KRISH J.
PROGRAM OF 2D ARRAYS 
---------------------------------------------------------------------------------------------

QUESTION - 1 ) Create a two dimensional array of 10 students and 5 subjects.
		   Store marks of each student in each subject. Give the following output
a.For a given student display marks of each subject.
b.For a given subject display marks of each student.
c.Find maximum marks obtained for a given subject.
d.Given a subject find total number of failures.
e.Give index of the subject in which maximum failures are there.
f.Give student number who is the topper.

---------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[10][5],sum[10][5]i,j,min=0,max=0,flag=0,top=0,sum=0;
    clrscr();
    
    printf("Enter marks of 10 students and 5 subjects:\n");
    for(i=0;i<10;i++){
        printf("\nSTUDENT %d:\n\n",i+1);
        for(j=0;j<5;j++){
            printf("SUBJECT %d:",j+1);
            scanf("%d",a[i][j]);
        }
    }

    //QUESTION - 1, 2
    for(i=0;i<10;i++){
        printf("\nSTUDENT %d:\n\n",i+1);
        for(j=0;j<5;j++){
            printf("SUBJECT %d:",j+1);
            printf("%d",a[i][j]);
        }
    }

    // QUESTION - 3//
    if(max<a[0][j]){
        max=a[0][j];
        printf("MAXIMUM OF SUBJECT %d IS %d",j+1,max);
        continue ; 
    }
    printf("\nD\n");

    //question - 4
    for(i=0;i<10;i++){
        if(17>a[i][0]) {
            flag++;
        }
    }
    printf("FAILURES Are %d",flag);
    
    //question - 5
    for(j=0;j<5;j++){
        flag =0;
        for(i=0;i<10;i++){
            if(a[i][j]<17){
                flag++ ;
            }
        }
        printf("MOST FAILURES SUBJECT %d 'S FAILED NUMBER IS %d",j+1,flag);
    } 

    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            sum= sum +a[i][j];
        }
    }
    
    //question - 6
    if(top<sum[0][j]){
        top=sum[0][j];
        printf("TOPPER STUDENTS ' S NUMBER IS %d",i+1);
    }

    getch();
    return 0;
}
