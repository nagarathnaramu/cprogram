#include<stdio.h>
int vowel( char alphabet )
{
int lowercase,highercase;
lowercase=(alphabet=='a'||alphabet=='e'|| alphabet=='i'||alphabet=='o'||alphabet=='u');
highercase=(alphabet=='A'||alphabet=='E'|| alphabet=='I'||alphabet=='O'||alphabet=='U');
if(lowercase||highercase)
{
printf("%c is vowel\n",alphabet);
}
else
{
printf("%c is consonant\n",alphabet);
}
}
int main()
{
char alphabet;
int lowercase,highercase;
printf("enter the charter");
scanf("%c",&alphabet);
vowel(alphabet);
return 0;
}
