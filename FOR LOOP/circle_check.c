

#include<stdio.h>
#include<math.h>
int main()
{
    int x , y,r, x1,y1;
    printf ("Enter the center x cordinate");
    scanf("%d",&x);
    printf ("Enter the center y cordinate");
    scanf("%d",&y);
    printf ("Enter the radius");
    scanf("%d",&r);
    printf ("Enter the point x cordinate");
    scanf("%d",&x1);
    printf ("Enter the point y cordinate");
    scanf("%d",&y1);
    int d = sqrt(pow((x-x1),2)+pow((y-y1),2));
    if(d<r)
    {
        printf("The point lies within the circle");
    }
    else if(d>r)
    {
      printf("The point lies outside the circle");  
    }
    else(d==r){
        printf("The point lies on the circle");
    }
    return 0;
    
}