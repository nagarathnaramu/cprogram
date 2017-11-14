#include<stdio.h>
int divide(int num)
{
if(num%4==0)
{
printf("%d is leap year",num);
}
else
{
printf("%d is not a leap year",num);
}
return (num);
}
int main()
{
int a;
printf("enter the value of a");
scanf("%d",&a);
divide(a);
return 0;
}
