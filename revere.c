#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int num,sum=0,rem,temp;

printf("enter the value\n");
scanf("%d", &num);
for(temp=num;num>0;)
{
rem=num%10;
sum=(sum*10)+rem;
num=num/10;
}
printf("reverse of number %d %d\n",temp,sum);
return 0;
}
