#include<stdio.h>

int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    if(a==0)
    {
    printf("Its Encountered because of 0");
    }
    else if(a>0)
    {
    printf("Its Positive Number");
    }
    else
    {
    printf("Its Negative Number");
    }
    return 0;
}