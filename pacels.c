#include<stdio.h>
 int fact( int n )
{
      int c,res=1;
      for (c=1;c<=n;c++)
{
       res=res*c;
       return ( res );
}
}
int main()
{
int line,i,j,space=5;
printf("enter the number of lines");
scanf("%d",&line);
for ( i=1;i<=line;i++)
{
 for (j=1;j<=space;j++)
{
   printf(" ");
}
    for( j=1;j<=i;j++)
{
   
       printf("%d ",fact(i)/(fact(j)*fact(i-j)));  
}  
      printf("\n"); 
       space--;
}
return 0;
}

