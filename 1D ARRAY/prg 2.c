/*

NAME - SHAH KRISH J . 
PROGRAM OF 1D ARRAYS

--------------------------------------------------------------------------------------------------

QUESTION :

8)    Find median and standard deviation of the numbers.
9)	Sort the list.

------------------------------------------------------------------------------------------------*/

#include <stdio.h>
void sort(int xar , int n);
float amedian(int ar[] , int n);
int main()
{
    int ar1[10] = {0};
    int i=0 ,x,n=0;
    float median=0;
    clrscr();
    printf("\nEnter the number of elements for the array : ");
    scanf("%d",&n);
   
    printf("\nEnter the elements for ar1 :\n");
    for(i=0 ; i<n ; i++)
    {
        printf("ar1[%d] : ",i);
        scanf("%d",&ar1[i]);
    }
    x = sort(ar1 , n);
    median = amedian(ar1 , n);
    
    printf("\n\nThe median is : %f\n",median);
    printf("Sorting Is : \n%d",x);
    getch();
    return 0;
}

// FUNCTION - 1 IS USED //
void sort(int xar , int n);
{
    int i=0 , j=0 , ch=0;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n-1 ; j++){
            if(ar[j]>ar[j+1]){
                ch= ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = ch;
            }
        }
    }
}

// FUNCTION - 2 IS USED //
float amedian(int ar[] , int n)
{
    float median=0;
    if(n%2 == 0){
        median = (array[(n-1)/2] + array[n/2])/2.0;
    }else{
        median = array[n/2];
    }  
    return (median);
}
