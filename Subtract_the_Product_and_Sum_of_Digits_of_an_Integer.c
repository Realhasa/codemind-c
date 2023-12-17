#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,pro=1,sum=0;
    while(n!=0){
        r=n%10;pro=pro*r;sum=sum+r;
        n=n/10;
    }
    int diff=pro-sum;
    printf("%d",diff);
}