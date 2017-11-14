#include<stdio.h>
int main()
{
int selling_price,cost,difference;
printf("enter the cost");
scanf("%d",&cost);
printf("enter the selling price");
scanf("%d",&selling_price);
if(selling_price>cost)
{
difference=selling_price-cost;
printf("%d is profit\n",difference);
}
else
{
printf("%d is loss\n",difference);
}
}

