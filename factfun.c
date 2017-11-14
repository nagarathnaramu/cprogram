#include<stdio.h>
int fact(int num)
{
int i,a=1;
for(i=1;i<=num;i++)
{
a=a*i;
}
return(a);
}
int main()
{
int x,y;
printf("enter the value of x");
scanf("%d",&x);
y=fact(x);
printf("y=%d",y);
return 0;
}

