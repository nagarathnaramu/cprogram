#include<stdio.h>
int loss(int selling_price)
{
int cost,difference;
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
int main()
{
int selling,price,difference;
printf("enter the price");
scanf("%d",&price);
printf("enter the selling ");
scanf("%d",&selling);
loss(selling);
return 0;
}
