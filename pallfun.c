#include<stdio.h>
int integer( int n )
{
int rem,rev=0,a;
a=n;
while( n!=0 )
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if ( a == rev)
{
printf("%d is a palindrome",a);
}
else
{
printf("%d is a not palindrome",a);
}
}
int main()
{
int num,a;
printf("enter the num");
scanf("%d",&num);
integer( num );
return 0;
}


