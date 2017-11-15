#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mode(int a,int b);


struct foo
{
 //int a;
 int (*ope9r)(int b,int c);

};

int main()
{
 int ans,i,j,a,b;
 //int(*oper[4])(int a,int b)={add,sub,mul,div};
 struct foo foo1[5];
 printf("enter where u want add");
 scanf("%d",&i);
 foo1[i].ope9r=add;
 printf("enter where u want sub");
 scanf("%d",&i);
 foo1[i].ope9r=sub;
 printf("enter where u want mul");
 scanf("%d",&i);
 foo1[i].ope9r=mul;
 printf("enter where u want div");
 scanf("%d",&i);
 foo1[i].ope9r=div;
 printf("enter where u want mod");
 scanf("%d",&i);
 foo1[i].ope9r=mode;

 printf("enter the value of a,b");
 scanf("%d%d",&a,&b);
 printf("enter the key what u want to perform");
 scanf("%d",&j);
  //for(j=0;j<5;j++)
 ans=foo1[j].ope9r(a,b);

 printf("%d\n",ans);

return 0;
}

int add(int a,int b)
{
 return(a+b);
}
int sub(int a,int b)
{
 return(a-b);
}
int mul(int a,int b)
{
 return(a*b);
}
int div(int a,int b)
{
 return(a/b);
}
 int mode(int a,int b)
{
 return(a%b);
}
                                                                                                                             2,1           Top

