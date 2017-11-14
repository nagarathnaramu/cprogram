#include<stdio.h>
int rev(int num)
{
int rem,sum=0,i;
for(i=1;i<=num;i++)
{
rem=num%10;
sum=(sum*10)+rem;
num=num/10;
}
return (sum);
}
int main()
{
int a,r,s=0;
printf("enter the value of a")
scanf("%d",&a);
s=rev(a);
printf("s=%d",s);
return 0;
}

