#include<stdio.h>
int main()
{
    int n,m,x,perimeter,cost;
    scanf("%d%d%d",&n,&m,&x);
    perimeter=2*(n+m);
    cost=x*perimeter;
    printf("%d",cost);
}