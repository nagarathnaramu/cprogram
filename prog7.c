#include<stdio.h>
int main()
{
 int num,rem,count=0;
 printf("enter the number");
 scanf("%d",&num);
 while(num>0)
{
rem=num%10;
count++;
num=num/10;
}
printf("number of digits are %d",count);
return 0;
}
