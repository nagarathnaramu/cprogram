#include<stdio.h>
int pyramid(int row )
{
int i,j,space=4,c=0;
for ( i=1;i<=row;i++)
{
 for (j=1;j<=space;j--)
{
   printf(" ");
}

    for( j=1;j<=i;j++)
{
       printf("%d",j);
   
}
printf("\n");
}
return ( row );
}
int main()
{
int line;
printf("enter the number of lines");
scanf("%d",&line);
pyramid ( line );
return 0;
}

