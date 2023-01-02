include<stdio.h>
int main()
{ int a,b,c;
    printf("Enter the first angle \n");
    scanf("%d",&a);
    printf("Enter the second angle \n");
    scanf("%d",&b);
    printf("Enter the third angle \n");
    scanf("%d",&c);
    if((a+b+c)==180)
    {
        printf("triangle can be formed");
    }
    else{
        printf("triangle cannot be formed");
    }
    return 0;
}
