/*

NAME - SHAH KRISH J . 
PROGRAM OF FUNCTIONS

---------------------------------------------------------------------------------------------

QUESTION - 5) Pass an array to the function. Write functions to

a.Return maximum value.
b.Return minimum value.
c.Return mean, median and mode.

---------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

int largest(int x,int y,int z);
int smallest(int x,int y,int z);
double findMean(int nums[], int total);
double findMedian(int nums[], int total);
int findMode(int nums[], int total);

main()
{
     int nums[MAX];
     int total;
     double mean, median, mode;
     clrscr();
     printf("Enter 3 values : \n");
     scanf("%d\t%d\t%d",&x,&y,&z); 
     maximum=largest(x,y,z);
     minimum=smallest(x,y,z);
     printf("The Largest Number is : %d \n",maximum);
     printf("The Smallest Number is : %d \n",minimum);
     total = readTotalNums(); 
     fillArray(total, nums); 
     sortArray(nums, total);
     mean = findMean(nums, total);
     median = findMedian(nums, total);
     mode = findMode(nums, total);
     printResults(mean, median, mode);
     printf("MEAN IS : %d",mean);
     printf("MEDIAN IS : %d",median);
     printf("MODE IS : %d",mode);
     getch();
     return 0;
    }
int x,y,z,maximum,minimum;

int largest(x,y,z)
{
    if(x>y && x>z)
       { maximum = x; }
    if(y>x && y>z)
       { maximum = y;  }
    if(z>x && z>y)
       { maximum = z; }                 
}

int smallest(x,y,z)
{
    if(x<y && x<z)
       { minimum = x; }
    if(y<x && y<z)
       { minimum = y;  }
    if(z<x && z<y)
       { minimum = z; }                 
}

double findMean(int nums[], int total) {
    int i;
    double sum = 0.0;
    for(i = 0; i < total; i++) {
        sum += nums[i];
    }
    return (sum/total);
}

double findMedian(int nums[], int total) {
    int temp;
    int i,j;
    for(i=0;i<total;i++){
        for(j=i+1;j<total;j++) {
            if(nums[i]>nums[j]) {
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
            }
       } 
    }
    if(total%2==0) {
        return (nums[total/2]+nums[total/2-1])/2;
    }else{
        return (nums[total/2]);
    }
}

int findMode(int nums[],int total) {
    int i, j, maxCount, modeValue;
    int tally[total];

    for (i = 0; i < total; i++) {
         tally[nums[i]]++;
    }
    
    maxCount = 0;
    modeValue = 0;
    
    for (j = 0; j < total; j++) {
        if (tally[j] > maxCount) {
            maxCount = tally[j];
            modeValue = j;
        }
    }
    return (modeValue);
}