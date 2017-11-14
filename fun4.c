#include<stdio.h>
int fourth( int num)
{
int rem,sum=0;
rem=num%10;
sum=sum+rem;
num=num/1000;
rem=num%10;
sum=sum+rem;
num=num/1000;
return ( sum );
}
int main()
{
int n,s,r;
printf("enter the value of n");
scanf("%d",&n);
s=fourth(n);
printf("s=%d",s);
return 0;
}


