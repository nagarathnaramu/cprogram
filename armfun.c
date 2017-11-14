#include<stdio.h>
int arm ( int num )
{
int i,rem,sum=0;
for(i=1;i<=4;i++)
{
rem=num%10;
num=num/10;
sum=sum+rem^3^3^3;
printf("sum=%d,rem=%d\n",sum,rem);
}
}
int main()
{
int n,r,s;
printf("enter value of n");
scanf("%d",&n);
arm(n);
printf("s=%d\n",s);
}
