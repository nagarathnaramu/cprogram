#include<stdio.h>
int rev(int num)
{
int rem,sum=0,i;
{
while(num>0)
rem=num%10;
num=num/10;
sum=(sum*10)+rem;
}
return (sum);
}
int main()
{
int a,r,s=0;
printf("enter the value of a");
scanf("%d",&a);
s=rev(a);
printf("s=%d",s);
return 0;
}
