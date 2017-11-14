#include<stdio.h>
int main()
{
int i,num,count=0;
printf("enter the value num\n");iii,
scanf("%d",&num);
for(i=1;i<num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==2)
{
printf("%d is a prime\n",num);
}
else
{
printf("%d is a not prime\n",num);
}
return 0;
}

