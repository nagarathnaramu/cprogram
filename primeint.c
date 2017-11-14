#include<stdio.h>
int main()
{
int i,n,count=0,high,low;
printf("enter the value high,low\n");
scanf("%d%d",&high,&low);
for(n=low;n<high-1;n++)
{
for(i=1;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("n=%d\n",n);
}
}
return 0;
}
