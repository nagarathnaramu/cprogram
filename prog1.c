#include<stdio.h>
int main()
{
 int num,i,rem;
printf("enter the number ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
 rem=num%2;
 num=num/2;
 printf("%d",rem);
}
return 0;
}

