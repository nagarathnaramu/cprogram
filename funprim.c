#include<stdio.h>
int prime(int num)
{
int i,c=0;
for(i=1;i<=num;i++)
{
if(num%i==0)
{
c++;
}
}
if(c==2)
{
printf("%d num is prime\n",num);
}
else
{
printf("%d num is not prime\n",num);
}
return (num);
}
int main()
{
int a;
printf("enter the value of a");
scanf("%d",&a);
prime(a);
printf("a=%d",a);
return 0;
}
              
