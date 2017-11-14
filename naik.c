#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the number");
scanf("%d",&n);
printf("\n\n");

n=1;
while(i>=1)
{
j=1;
while(j<=i)
{
printf("* ");
j++;
}
printf(" ");
printf("\n");
i++;
}
return 0;
}
