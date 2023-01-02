#include<stdio.h>
int main()
{
    int a ;
    int d;
    int rev = 0;

    printf("Enter the five digit number :\n");
    scanf("%d",&a);
    int c = a;
    while(a!=0)
    {
        d = a%10;
        rev = (rev*10) + (d);
        a = a/10;
    }
    printf("The reverse is %d \n",rev);
    if (rev==c)
    {
        printf("The reverse is same");

    }
    else
    {
        printf("The reverse is not same");

    }
    return 0;
}