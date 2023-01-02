#includstdio.>
int main()
{
int x,y;
printf("Enter The Value Of X");
scanf("%d",&x);
printf("Enter The Value Of Y");
scanf("%d",&y);

if(x==0)
{printf("Point Lies On Y Axis");
}
else if (y==0)
{printf("Point Lies On X Axis");
}
else if (x==0 && y==0)
{printf{"point lies on the origin");
}
else{
printf("point does not lie on any axis neither the origin");
}
return 0;
}
