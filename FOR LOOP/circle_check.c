

#include<stdio.h>
#include<math.h>
int main()
{
    int x , y,r, x1,y1;
    printf ("Enter the center X coordinate");
    scanf("%d",&x);
    printf ("Enter the center Y coordinate");
    scanf("%d",&y);
    printf ("Enter the Radius");
    scanf("%d",&r);
    printf ("Enter the point X coordinate");
    scanf("%d",&x1);
    printf ("Enter the point Y coordinate");
    scanf("%d",&y1);
    int d = sqrt(pow((x-x1),2)+pow((y-y1),2));
    if(d<r)
    {
        printf("The point lies inside the circle");
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