#include<stdio.h>
int main()
{
int n,i,sum=1;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum*i;
printf("sum=%di=%d\n",sum,i);
}
printf("sum=%d\n",sum);
return 0;
}
