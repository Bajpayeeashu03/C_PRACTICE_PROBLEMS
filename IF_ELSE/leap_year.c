#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year \n");
    scanf("%d",&y);
    if(y%4==0)
    {
    printf("year %d is a leap year",y);
    }
    else{
    printf("year %d is not a leap year",y);
    }
    return 0;
}
