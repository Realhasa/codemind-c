#include<stdio.h>
int main()
{
    int n,first_d,last_d,sum;
    scanf("%d",&n);
    
    
    first_d=n;
    while(first_d>=10){
        first_d/=10;
    }
    
    last_d=n%10;
    
    sum=first_d+last_d;
    printf("%d",sum);
    
    
    
}