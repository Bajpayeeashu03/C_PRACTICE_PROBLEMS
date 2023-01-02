include<stdio.h>
int main()
{int cp,sp,loss,profit;
printf("Enter The Value Of Cost Price");
scanf("%d",&cp);
printf("Enter The Value Of Selling Price");
scanf("%d",&sp);
if(sp>cp)
{profit=sp-cp;
printf("It Is A Profit\n");
printf("The Profit Is:%d\n",profit);
}
else
{loss=cp-sp;
printf("It Is A Loss\n");
printf("The Loss Is: %d\n",loss);
}
return 0;
}