#include<stdio.h>
int main ()
{
int i,rate,salary,over_time;
for(i=1;i<=10;i++)
{
printf("enter the working over_time");
scanf("%d",&over_time);
printf("enter the rate");
scanf("%d",&rate);
if(over_time>40)
{
over_time=over_time-40;
salary=rate*over_time;
printf("salary=%d over_time=%d\n",salary,over_time);
}
salary=salary+120;
printf("salary=%d\n",salary);
}
}
