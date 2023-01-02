#include<stdio.h>
int main()
{  
     int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    if(a<0)
    {
        int b = -1*a;
        printf("The absolute value is %d",b);

    }
    else
    {
         printf("The absolute value is %d",a);

    }
    return 0;
}