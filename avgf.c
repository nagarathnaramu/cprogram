#include<stdio.h>
int mul(int a,int b)
{
int mul;
mul=a/b;
}
int main()

{
int x,y,z;
printf("enter the value of x,y");
scanf("%d %d",&x,&y);
z=mul(x,y);
printf("z=%d",z);
return 0;
}
