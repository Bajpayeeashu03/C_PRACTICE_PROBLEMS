#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the length\n");
    scanf("%d",&l);
    printf("Enter the breadth\n");
    scanf("%d",&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>p)
    {
        printf("The area %d is greater than perimeter %d",a,p);
    }
     else
    {
        printf("The perimeter %d is greater than area %d",p,a);
    }
    return 0;

}