#include<stdio.h>
int main()
{
    int a,b;
    float ave;
    
    scanf("%d%d",&a,&b);
    ave=(a+b)/2.00;
    printf("Average of %d and %d is: %.2f",a,b,ave);
}