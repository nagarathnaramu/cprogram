#include<stdio.h>
int main()
{
int i,j,num,c=0;
printf("enter value of num");
scanf("%d",&num);

for(i=2;i<=num;i++);
  {
   for(j=1;j<=i;j++)
     {
      if(i%j==0)
       {
        printf("i=%d",i);
        c++;
       }
      } 
       if(c==2)
        {
         printf("i=%d\n",i);
        }
           c=0; 
    }
 }

