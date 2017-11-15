#include<stdio.h>
int main()
{
int num,i,rem,sum=0;
printf("enter value of num");
scanf("%d",&num);
for(i=1;i<=4;i++)
{
rem=num%10;
num=num/10;
sum=sum+rem^3^3^3;

printf("sum=%d,rem=%d\n",sum,rem);
}
printf("sum=%d\n",sum);
printf("linux");
}
