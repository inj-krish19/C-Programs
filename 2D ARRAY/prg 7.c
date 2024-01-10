/*

NAME - SHAH KRISH J.
PROGRAM OF 2D ARRAYS 

---------------------------------------------------------------------------------------------

QUESTION - 7 ) Implement following programs using enum 

---------------------------------------------------------------------------------------------*/

/*  ============================QUESTION 1===============================*/


#include<stdio.h>
enum weekdays{
	Sunday=1,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

int main()
{
	enum weekdays w; // variable declaration of weekdays type  
	w=Monday; // assigning value of Monday to w.  
	printf("The value of w is %d",w);
	
	getch();
	return 0;
}

/*  ============================QUESTION 2===============================*/


#include<stdio.h>
enum months{
	jan=1,feb,
	march,april,
	may,june,
	july,august,
	september,october,
	november,december
};

int main()
{
	// printing the values of months
	for(int i=jan;i<=december;i++){
		printf("%d,",i);
	}
	return 0;
}

/*  ============================QUESTION 3===============================*/


#include <stdio.h>
int main() 
{
    enum cat {sports,cs};
    enum cat category;
    printf("Enter Category : ");
    scanf("%d",&category);
    if (category == sports)
    printf("You belong to Sports Category");
    else
    printf("You belong to Computer Category");
    return 0;
}
