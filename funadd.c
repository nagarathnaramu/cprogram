#include<stdio.h>
int add(int a,int b)
{
int c;
c=a+b;
}
int main()
{
int x,y,z;
printf("enter the value of x & y");
scanf("%d %d",&x,&y);
z=add(x,y);
printf("z=%d",z);
return 0;
} 
