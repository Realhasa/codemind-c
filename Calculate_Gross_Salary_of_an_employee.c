#include<stdio.h>
int main()
{
    float salary,hra,da,pf;
    scanf("%f%f%f",&salary,&hra,&da);
    pf=(salary*12)/100.00;
    printf("%.2f
",pf);
    float gross_salary=salary+hra+da+pf;
    printf("%.2f",gross_salary);
}