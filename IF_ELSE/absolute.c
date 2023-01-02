#include<stdio.h>
int main()
{  
     int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    if(num<0)
    {
        int b = -1*num;
        printf("The absolute value is %d",b);

    }
    else
    {
         printf("The absolute value is %d",num);

    }
    return 0;
}