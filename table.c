#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
sum=n*i;
printf("sum=%d\n",sum);
}
printf("sum=%d\n",sum);
return 0;
}
