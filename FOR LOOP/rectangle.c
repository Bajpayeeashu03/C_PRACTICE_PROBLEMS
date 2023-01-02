#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the length\n");
    scanf("%d",&l);
    printf("Enter the breadth\n");
    scanf("%d",&b);
    int A = l*b;
    int P = 2*(l+b);
    if(A>P)
    {
        printf("The area %d is greater than perimeter %d",A,P);
    }
     else
    {
        printf("The perimeter %d is greater than area %d",P,A);
    }
    return 0;

}