
include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the first x cordinate \n");
    scanf("%d",&x1);
    printf("Enter the first y cordinate \n");
    scanf("%d",&y1);
    printf("Enter the second x cordinate \n");
    scanf("%d",&x2);
    printf("Enter the second y cordinate \n");
    scanf("%d",&y2);
    printf("Enter the third x cordinate \n");
    scanf("%d",&x3);
    printf("Enter the third y cordinate \n");
    scanf("%d",&y3);
    int s1 = ((y1-y2)/(x1-x2));
    int s2 = ((y2-y3)/(x2-x3));
    int s3 = ((y3-y1)/(x3-x1));
    if(s1==s2==s3)
    {
        printf("They fall under the same line");
    }
    else{
        printf("They do not fall under the same line");
    }
    return 0;
}