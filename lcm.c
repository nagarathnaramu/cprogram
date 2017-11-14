#include<stdio.h>
int main()
{
int n1,n2,i,lcm;
printf("enter the value of n1,n2");
scanf("%d %d",&n1,&n2);
for(i=2;i<=n1 && i<=n2;i++)
{
if(n1%i==0 && n2%i==0)
{
n1=n1/i;
n2=n2/i;
lcm=i;
lcm=lcm*i;
printf("lcm=%d\n",lcm);
}
}
printf("n1=%d,n2%d,lcm=%d\n",n1,n2,lcm);
return 0;
}

