#include<stdio.h>
int table( int num )
{
int i,sum=0;
for(num=1;num<=10;num++)
{
for(i=1;i<=10;i++)
{
sum=num*i;
printf("sum=%d\n",sum);
}
}
}
int main()
{
int n,table1;
//printf("enter the value of n");
//scanf("%d",&n);
table1=table(n);
return 0;
}
