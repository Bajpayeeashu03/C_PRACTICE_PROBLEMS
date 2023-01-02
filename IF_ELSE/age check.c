#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the age of Ram \n");
    scanf("%d"&a);
     printf("Enter the age of Shyam\n");
    scanf("%d"&b);
     printf("Enter the age of Ajay\n");
    scanf("%d"&c);
    if(a<b&&a<c)
    {
        printf("Ram is Youngest")
    }
    else if(b<c&&b<a)
    {
        printf("Shyam is Youngest")
    }
    else
    {
        printf("Ajay is Youngest")
    }
    return 0;
}