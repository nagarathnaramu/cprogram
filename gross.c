#include<stdio.h>
int gross( int basic_salary)
{
int total_salary;
total_salary=basic_salary+.1*basic_salary+.2*basic_salary;
}
int main()
{
int basic_salary,total_salary;
printf("enter value basic_salary");
scanf("%d",&basic_salary);
total_salary=gross(basic_salary);
printf("%d=total_salary",total_salary);
return 0;
}


