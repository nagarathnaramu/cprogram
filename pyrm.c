#include<stdio.h>
int pyramid(int row )
{
int i,j,space=5;
char ch;
for ( i=1;i<=row;i++)
{
   ch='A';
 for (j=1;j<=space;j++)
{
   printf(" ");
}
    for( j=1;j<=i;j++)
{
       printf("%c ",ch--);
   
}
       printf("\n");
       space--;
}
 for ( i=row-1;i>=1;i--)
{

 for (j=space+1;j>=0;j--)
{
   printf(" ");
}
    for( j=1;j<=i;j++)
{
       printf("%c ",ch++);

}
       printf("\n");
       space++;
}
}
int main()
{
int line;
printf("enter the number of lines");
scanf("%d",&line);
pyramid ( line );
return 0;
}

